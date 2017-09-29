#include<iostream>
#include<string>
#include<map>
using namespace std;
 
int main()
{
    string str;
    while (cin >> str)
    {
        map<string, int>my;
        for (int i = 0; i < str.length();i++)
            for (int j = 1; j <= str.length()-i; j++)
                 my[str.substr(i, j)]++;
 
        for (map<string, int>::iterator it = my.begin(); it != my.end(); it++)
        {
            if (it->second>1)
                cout << it->first << " " << it->second << endl;
        }
    }
    return 0;
}
