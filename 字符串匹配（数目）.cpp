#include <iostream>
#include <cstring>
 
using namespace std;
 
int main()
{
    string T,P;
    int cnt;
    while(cin >> T)
    {
        cnt=0;
        cin >> P;
        int startpos = 0;
        int pos=T.find(P, startpos);
        while(pos!=string::npos)
        {
            cnt++;
 
            pos=T.find(P, pos+1);
        }
        cout << cnt << endl;
    }
    return 0;
}


