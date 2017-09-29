#include <iostream>
#include <cstring>
 
using namespace std;
 
int main()
{
    string str1,str2;
    while(cin >> str1>>str2)
    {
        int count=0;
        int startpos = 0;
        int pos=str1.find(str2, startpos);
        while(pos!=string::npos)
        {
            count++;
            pos=str1.find(str2, pos+1);
        }
        cout << count<< endl;
    }
    return 0;
}


