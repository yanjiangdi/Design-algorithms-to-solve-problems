#include<stdio.h>
#include<string.h>
struct node{
    node* lchild;
    node* rchild;
    int c;
}Tree[15];
int loc;
node* creat(){
    Tree[loc].lchild=Tree[loc].rchild=NULL;
    return &Tree[loc++];
}
node* insert(node* T,int x){
    if(T==NULL){
        T=creat();
        T->c=x;
        return T;
    }
    else if(x<T->c){
        T->lchild=insert(T->lchild,x);
    }
    else if(x>T->c){
        T->rchild=insert(T->rchild,x);
    }
    return T;
}
int len;
void preorder(node* T,int seq[]){
    seq[len++]=T->c;
    if(T->lchild!=NULL)
        preorder(T->lchild,seq);
    if(T->rchild!=NULL)
        preorder(T->rchild,seq);
}
int main(){
    int n;
    char str[12];
    while(scanf("%d",&n)!=EOF&&n!=0){
        node* T=NULL;
        scanf("%s",str);
        int Len=strlen(str);
        loc=0;
        for(int i=0;i<Len;i++){
            int x=str[i]-'0';
            T=insert(T,x);
        }
        int seq[12];
        len=0;
        preorder(T,seq);
        while(n--){
            scanf("%s",str);
            T=NULL;
            loc=0;
            for(int j=0;j<Len;j++){
                int x=str[j]-'0';
                T=insert(T,x);
            }
            int seqn[12];
            len=0;
            preorder(T,seqn);
            int k;
            for(k=0;k<Len;k++){
                if(seq[k]!=seqn[k])
                    break;
            }
            if(k==Len)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
