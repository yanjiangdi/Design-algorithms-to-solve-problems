#include <iostream>
using namespace std;

int main() {
    string str;
    while(getline(cin,str))
    {
        string r1,r2;
        cin>>r1>>r2;
        while(str.find(r1)!=str.npos)
        {
            str= str.replace(str.find(r1), r1.length(), r2);
        }

        cout<<str<<endl;
    }
    return 0;
}