#include <bits/stdc++.h>
using namespace std;
int main(){
    for(string s;cin>>s;cout<<endl){
        sort(s.begin(),s.end());
        for(cout<<s<<endl;next_permutation(s.begin(),s.end());cout<<s<<endl);
    }
    return 0;
}
