#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;
 
int main()
{
    string s;
    while (cin >> s)
    {
        vector<double> num, resnum;
        vector<char> sym, ressym;
        for (int i = 0; i < s.length();)
            if (s[i] >= '0'&&s[i] <= '9')
            {
                double sum = 0;
                while (i < s.length() && s[i] >= '0'&&s[i] <= '9')
                {
                    int n = s[i] - '0';
                    sum = sum * 10 + n;
                    i++;
                }
                num.push_back(sum);
            }
            else
                sym.push_back(s[i++]);
        for (int i = 0; i < sym.size(); i++)
        {
            if (sym[i] == '/')
            {
                num[i + 1] = num[i] / num[i + 1];
                num[i] = 0;
                sym[i] = '+';
            }
            else if (sym[i] == '*')
            {
                num[i + 1] = num[i] * num[i + 1];
                num[i] = 0;
                sym[i] = '+';
            }
            else
                continue;
        }
        for (int i = 0; i < num.size(); i++)
            if (num[i] != 0)
            {
                resnum.push_back(num[i]);
                if (i != num.size() - 1)
                    ressym.push_back(sym[i]);
            }
        double sum = resnum[0];
        for (int i = 0; i < ressym.size(); i++)
        {
            if (ressym[i] == '+')
                sum += resnum[i + 1];
            else
                sum -= resnum[i + 1];
        }
        printf("%.0f\n", sum);
    }
    return 0;
}

