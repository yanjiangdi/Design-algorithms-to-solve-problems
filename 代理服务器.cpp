#include<iostream>
#include<cstring>
#include <stdlib.h>

using namespace std;
 

 
int find(char agent[1000][40],char server[5000][40],int n,int m);
 
int main(){
    int n,m;
    char agent[1000][40],server[5000][40];
    while( cin>>n){
         
        for(int i=0;i<n;i++)
           cin>>agent[i];
 
        cin>>m;
 
        for(int j=0; j<m; j++)
            cin>>server[j];
 
        cout<<find(agent,server,n,m)<<endl;
    }
    return 0;
}
 
int find(char agent[1000][40],char server[5000][40],int n,int m){
 
    int cur = 0;    //当前服务器÷
    int maxFar = 0; //从当前位置所有代理中能访问的最大服务器数
    int num = 0;    //切换次数
    int cfar = 0;   //当前代理服务器能按顺序访问的服务器数+当前的服务器顺序
 
    while(cur<m){
        for(int i=0;i<n;i++){
            cfar = cur; //当前代理服务器能按顺序访问的服务器数+当前的服务器顺序
            //当前代理能访问到的最远处
            while( strcmp( agent[i],server[cfar] ) !=0 ){
                cfar++;        
            }
            if(cfar>maxFar)
                maxFar = cfar;
        }
        //例如只有一个代理且碰到了ip相同的服务器
        if(maxFar==0)
            return -1;
        cur = maxFar;
        num++;
    }
    return num-1;
 
}


