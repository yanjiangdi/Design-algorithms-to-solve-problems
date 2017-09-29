#include<iostream>  
using namespace std;  
  
// p ��������r ��Դ����  
#define p 4  
#define r 3  
  
  
/*-----------------------------------------------*/    
/*���뺯��*/    
/*-----------------------------------------------*/  
//a-max,b-allocation,c-need,d-available  
void input(int a[p][r],int b[p][r],int c[p][r],int d[r])  
{  
    int i,j;  
    cout<<"* input max data:\n";  
    for(i=0;i<p;i++)  
        for(j=0;j<r;j++)cin>>a[i][j];  
    cout<<"* input allocation data:\n";  
    for(i=0;i<p;i++)  
        for(j=0;j<r;j++)cin>>b[i][j];  
    cout<<"* input need data:\n";  
    for(i=0;i<p;i++)  
        for(j=0;j<r;j++)cin>>c[i][j];  
    cout<<"* input available data:\n";  
    for(j=0;j<r;j++)cin>>d[j];  
}  
  
/*-----------------------------------------------*/    
/*�ȽϺ���*/    
/*-----------------------------------------------*/  
//�ȽϽ��Ϊm�е�Ԫ��ȫ����n�е�Ԫ�ط���1�����򷵻�0  
int com(int m[r],int n[r])  
{  
    int i,flag=0;  
    for(i=0;i<r;i++)  
        if(m[i]<n[i])  
        {  
            flag=1;  
            break;  
        }  
    if(flag==1) return(0);  
    else return(1);  
}  
  
  
/*-----------------------------------------------*/    
/*��ȫ�Լ��麯��*/    
/*-----------------------------------------------*/  
//b��c��d����ͬ��  
int stest(int b[p][r],int c[p][r],int d[r])  
{  
    int i,j,k,l,flag=0,flag1=0;  
    int t[r],finish[p],dd[r];  
    for(i=0;i<p;i++)finish[i]=0;//finishΪ1����ʾavailable����ĳһ���̲�����ʵ��  
  
    for(i=0;i<r;i++)dd[i]=d[i];  
    cout<<"�������У�\n";  
    for(k=0;k<p;k++)            //ȫ������ֱ��ʵ�ֻ򲻿���ʵ��  
    {  
        for(i=0;i<p;i++)  
        {  
            if(finish[i]==1)continue;  
            else  
            {  
                for(j=0;j<r;j++)t[j]=c[i][j];  
                if(com(dd,t))  
                {  
                    finish[i]=1;  
                    cout<<i+1<<'\t';  
                    flag=1;  
                    for(l=0;l<r;l++)dd[l]=dd[l]+b[i][l];  
                    break;  
                }  
            }  
            if(flag==1)break;  
        }     
    }  
    cout<<'\n';  
    for(l=0;l<p;l++)  
    {  
        //cout<<finish[l]<<endl;  
        if(finish[l]==0)flag1=1;  
    }  
        //cout<<flag1<<endl;  
    if(flag1==0)return(1);    //flag1Ϊ��¼finish�Ƿ���0���ڵı�ǣ���flag1=0ʱ����ȫ  
    else return(0);  
}  
  
  
/*-----------------------------------------------*/    
/*������̺�İ�ȫ�Լ��麯��*/    
/*-----------------------------------------------*/  
//req-request,n-��n������������Դ  
void rtest(int b[p][r],int c[p][r],int d[r],int req[r],int n)  
{  
    int i,j;  
    int t[r];  
    n=n-1;  
    for(i=0;i<r;i++)t[i]=c[n][i];  
    if(com(d,req)&&com(t,req))//��available��request���бȽ�  
    {  
        for(j=0;j<r;j++)  
        {  
            b[n][j]=b[n][j]+req[j];  
            c[n][j]=c[n][j]-req[j];  
            d[j]=d[j]-req[j];  
        }  
        if(stest(b,c,d))cout<<"����"<<n+1<<"������������Դ��\n";  
        else   
        {  
        cout<<"������"<<n+1<<"������������Դ��\n";  
  
        cout<<"�ָ���ǰ״̬��\n";  
        for(j=0;j<r;j++)  
        {  
            b[n][j]=b[n][j]-req[j];  
            c[n][j]=c[n][j]+req[j];  
            d[j]=d[j]+req[j];  
        }  
        }  
    }  
  
    else cout<<"������Դ������\n";  
}  
  
  
/*-----------------------------------------------*/    
/*������*/    
/*-----------------------------------------------*/  
int  main()  
{  
    int j,n;                   //n-��n����Դ����  
    int max[p][r],allocation[p][r],need[p][r];  
    int available[r],request[r];  
    input(max,allocation,need,available);  
  
    if(stest(allocation,need,available)==1)cout<<"��ʼ״̬��ȫ��\n";  
    else cout<<"��ʼ״̬����ȫ��\n";  
  
    cout<<" input request data:\n";  
    for(j=0;j<r;j++)cin>>request[j];  
  
    cout<<"��n������������Դ����n��ֵ\n";  
    cin>>n;  
  
    rtest(allocation,need,available,request,n); 
	return 0; 
}  

