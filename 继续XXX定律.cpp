#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
    int n;
    int a[501];
    int mark[1001];
    int key[500];
    while(cin>>n && n){
        memset(mark,0,sizeof(mark));
        for(int i=0;i<n;++i){
            cin>>a[i];
            int temp = a[i];
            if(mark[temp] == 1) continue;
            while(temp != 1 ) {
                if(temp %2 == 1) {
                    temp = (temp*3+1)/2;
                }else{
                    temp = temp/2;
                }
                if(temp<=1000 && temp>=1){
                    mark[temp] = 1;
                }
            }
        }
        int k=0;
        for(int i=n-1;i>=0;--i) {
            if(mark[a[i]] != 1) {
                key[k++] = a[i];
            }
        }
        for(int i=0;i<k-1;++i) {
            cout<<key[i]<<" ";
        }
        cout<<key[k-1]<<endl;
         
    }
    return 0;
}
