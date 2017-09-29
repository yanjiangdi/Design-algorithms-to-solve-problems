#include <iostream>
#include <math.h>
#include <sstream>
using namespace std;
int main() {

    string str;
    int a,b;
    while (cin>>a>>str>>b)
    {
        for(int i=0;i<str.length();i++)
        {
            str[i]=(char)toupper(str[i]);
        }
        double num=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                num+=(str[i]-'0')*pow(a,str.length()-i-1);
            }
            else if(str[i]>='A' && str[i]<='F')
            {
                num+=(str[i]-'0'-7)*pow(a,str.length()-i-1);
            }
        }
        int n=(int)num;
        string str_trans="";
        while(n>0)
        {
            int num_y=n%b;
            if(num_y>=0 && num_y<=9)
            {
                ostringstream ss;
                ss<<num_y;
                str_trans=ss.str()+str_trans;
            }
            else
            {
                str_trans=((char)(num_y+55))+str_trans;
            }
            n/=b;
        }
        cout<<str_trans<<endl;
    }

    return 0;
}