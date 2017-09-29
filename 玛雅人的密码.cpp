#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;
  

struct MaYaString{
    char maya[14];
    int level;
    int exc;  //exchange
};
  
  

bool isSame(char *a,char *b,int n);
  

bool isHave2012(char *a,int n);
  

bool isAble(char *a,int n);
  
int main(){
    int N,i,j,answer;
    char cc;
    queue<MaYaString *> Que;
    bool has2012;
  
    while(scanf("%d",&N)!=EOF){
        answer=0;
        has2012=false;
        MaYaString *Node1=new MaYaString;
        MaYaString *Node2;
  
        Node1->level=0;
        Node1->exc=-1;
        scanf("%s",Node1->maya);
        if(isHave2012(Node1->maya,N)){
            if(!isAble(Node1->maya,N)){   //!!!!!!!!
                printf("-1\n");
            }
            else
                printf("0\n");
            delete Node1;
        }
        else{ 
            Que.push(Node1);
            while(!Que.empty()){
                Node1=Que.front();
                Que.pop();
                for(i=0;i<N-1;i++){
                    if(Node1->exc==i)    //剪枝
                        continue;
                    Node2=new MaYaString;
                    Node2->exc=i;
                    Node2->level=(Node1->level)+1;
                      
                    for(j=0;j<N;j++){
                        Node2->maya[j]=Node1->maya[j];
                    }
                    cc=Node2->maya[i];
                    Node2->maya[i]=Node2->maya[i+1];
                    Node2->maya[i+1]=cc;
                      
                    if(isSame(Node1->maya,Node2->maya,N)){
                        delete Node2;
                        continue;
                    } 
                    if(isHave2012(Node2->maya,N)){   //有2012了
                        has2012=true;
                        answer=Node2->level;
                        //释放所有空间
                        delete Node2;
                        while(!Que.empty()){
                            Node2=Que.front();
                            Que.pop();
                            delete Node2;
                        }
                        break;
                    }
                    else{                        //还没有2012，入队
                        Que.push(Node2);
                    }
                }     
                delete Node1;
                if(has2012){        //有2012了
                    printf("%d\n",answer);
                }
            }
        }
    } 
    return 0;
}
  

bool isSame(char *a,char *b,int n){
    int i;
    bool boo=true;
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            boo=false;
            break;
        }
    }
    return boo;
}

bool isHave2012(char *a,int n){
    int i;
    bool boo=false;
    if(n<4){
        return false;
    }
    else{
        for(i=0;i<=(n-4);i++){
            if((a[i]=='2' && a[i+1]=='0') && (a[i+2]=='1' && a[i+3]=='2')){    //！！！！！&&能连用
                boo=true;
                break;
            }
        }
    }
    return boo;
}
  

bool isAble(char *a,int n){
    int i,n0=0,n1=0,n2=0;
    if(n<4)
        return false;
    else{
        for(i=0;i<n;i++){
            switch(a[i]){
            case '0':n0++;break;
            case '1':n1++;break;
            case '2':n2++;
            }
        }
        if(n0>=1 && n1>=1 && n2>=2)
            return true;
        else
            return false;
    }
}