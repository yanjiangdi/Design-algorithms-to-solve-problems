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
 
    int cur = 0;    //��ǰ��������
    int maxFar = 0; //�ӵ�ǰλ�����д������ܷ��ʵ�����������
    int num = 0;    //�л�����
    int cfar = 0;   //��ǰ����������ܰ�˳����ʵķ�������+��ǰ�ķ�����˳��
 
    while(cur<m){
        for(int i=0;i<n;i++){
            cfar = cur; //��ǰ����������ܰ�˳����ʵķ�������+��ǰ�ķ�����˳��
            //��ǰ�����ܷ��ʵ�����Զ��
            while( strcmp( agent[i],server[cfar] ) !=0 ){
                cfar++;        
            }
            if(cfar>maxFar)
                maxFar = cfar;
        }
        //����ֻ��һ��������������ip��ͬ�ķ�����
        if(maxFar==0)
            return -1;
        cur = maxFar;
        num++;
    }
    return num-1;
 
}


