
#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        int size = str2.size();
        bool flag = false;
        if (size == 5)
        {
            int i = 0;
            int max = 0, j = 1;
            while (str1[i] != '\0')
            {
                if (str1[i] > str2[0])
                {
                    if (str1[i] + 1 == str1[i + 1])
                        ++j;
                    else if (str1[i] == str1[i + 1])
                        ;
                    else
                    {
                        if (j > max)
                            max = j;
                        j = 1;
                    }
                }
                ++i;
            }
            if (max >= 5)
                flag = true;
        }
        else
        {
            int i = 0;
            int max = 0, j = 1;
            while (str1[i] != '\0')
            {
                if (str1[i] > str2[0])
                {
                    if (str1[i] == str1[i + 1])
                        ++j;
                    else if (j > max)
                    {
                        max = j;
                        j = 1;
                    }
                    else
                        j = 1;
                }
                ++i;
            }
            if (max >= size)
                flag = true;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}