#include <iostream>
using namespace std;

int main() {
    string str;
    while (getline(cin,str))
    {
        cout<<(char)toupper(str[0]);
        for(int i=1;i<str.length();i++)
        {
            if(str[i]=='\t' ||str[i]=='\r' || str[i]==' ' || str[i]=='\n')
            {
                str[i+1]=(char)toupper(str[i+1]);
            }
            cout<<str[i];


        }
        cout<<endl;
    }
    return 0;
}