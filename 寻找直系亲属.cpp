#include <iostream>
#include <string.h>
using namespace std;
int re[26];
void findre(int a,int b){
    int count=0;
    int tmp1=a,tmp2=b;
    while(re[a]!=b && a!=re[a]){
        count++;
        a=re[a];
    }
    count++;
    if(re[a]==b){
        int i;
        if(count>=3){
            for(i=count;i>2;i--){
                cout<<"great-";
            }
            cout<<"grandparent"<<endl;
        }else if(count==2)
            cout<<"grandparent"<<endl;
        else if(count==1)
            cout<<"parent"<<endl;
    }else{
        count=0;
        a=tmp2;
        b=tmp1;
        while(re[a]!=b && a!=re[a]){
            count++;
            a=re[a];
        }
        count++;
        if(re[a]==b){
            int i;
            if(count>=3){
                for(i=count;i>2;i--){
                    cout<<"great-";
                }
                cout<<"grandchild"<<endl;
            }else if(count==2)
                cout<<"grandchild"<<endl;
            else if(count==1)
                cout<<"child"<<endl;
            }else
                cout<<"-"<<endl;
    }
}
  
  
int main(){
    int i,j;
    char tmp[4]={"\0"};
    int n,m;
    while(cin>>n>>m &&m!=0 && n!=0){
        for(i=0;i<26;i++)
            re[i]=i;
        for(i=0;i<n;i++){
            cin>>tmp;
            for(j=1;j<strlen(tmp);j++){
                if(tmp[j]!='-'){
                    re[tmp[j]-'A']=tmp[0]-'A';
                }
            }
            memset(tmp,'\0',4);
        }
        for(i=0;i<m;i++){
            cin>>tmp;
            findre(tmp[0]-'A',tmp[1]-'A');
            memset(tmp,'\0',4);
        }
    }
    return 0;
}
