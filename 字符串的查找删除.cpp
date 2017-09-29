#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
 
int main()
{
    string str1, str2;
    cin >> str1;
    getchar();    //这一步很重要
    while (getline(cin,str2))
    {
        int i = 0, j = 0;
        for (;i+j < str2.size();)
        {
            if ((str2[i + j]|32) == (str1[j]|32))
                j++;
            else
            {
                i++;
                j = 0;
            }
            if (j == str1.size())
            {
                for (int z = i;z < i + str1.size();++z)
                    str2[z] = ' ';
                i = i + str1.size();
                j = 0;
            }
        }
        for (int i = 0;i < str2.size();++i)
            if (str2[i] == ' ')
                continue;
            else
                cout << str2[i];
        cout << endl;
    }
 
    return 0;
}