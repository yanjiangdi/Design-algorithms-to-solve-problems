#include<iostream> 
#include<stdlib.h>  
using namespace std;  
//-----------�������Ĵ洢�ṹ-----------  
typedef struct BiTNode{  
    int data;  
    struct BiTNode *lchild,*rchild;  
     }* BiTree;  
     //-------------��������--------  
bool LT(int a,int b) {  
    if(a<b)
	{  
  
    	return true;  
  
    }  
  
    else{  
  
    	return false;  
  
    }  
}  
     /*  
     //���Ҷ��������Ƿ����һ��ֵ��data��ȣ�����򷵻�true,���򷵻�false  
  
    
  
  
    �ڸ�ָ��root��ָ��Ķ����������еݹ�ز�����ؼ��ֵ���data������Ԫ�أ�  
  
    �����ҳɹ�����ָ��pָ�������Ԫ�ؽ�㣬������true��  
  
    ����ָ��pָ�����·���Ϸ��ʵ����һ����㲢����falseָ�룬ָ��fָ��root��˫�ף����ʼ����ֵNULL  
     */  
     int SearchBST(BiTree root,int data,BiTree f,BiTree &p);  
  
    
  
     //inline void InsertBST(BiTree &root,int data)  
    //rootΪ������ָ��  
     void InsertBST(BiTree &root,int data)  
     {  
       BiTree p,s;  
       if(-1==SearchBST(root,data,NULL,p))  //���Ҳ��ɹ�  
       {  
         s=(struct BiTNode *)malloc(sizeof(BiTNode));  
         s->data=data;  
         s->lchild=s->rchild=NULL;  
         if(p==NULL)  //����������Ϊ�յ�ʱ�򣬱�������*sΪ�µĸ����  
           root=s;  
         else if(LT(data,p->data))      //������*sΪ����  
           p->lchild=s;  
         else      //������*sΪ�Һ���  
           p->rchild=s;  
       }  
       return ;  
     }  
     //--------------------���ֱ�������  
     void PreOrderTraverse(BiTree root){  

	    if(root){  
	  
		    printf("%d ",root->data);  
		  
		    PreOrderTraverse(root->lchild);  
		  
		    PreOrderTraverse(root->rchild);  
	  
	    }  
     }  
     void InOrderTraverse(BiTree root)  //�������  
     {  
       if(root)  
       {  
         InOrderTraverse(root->lchild);  
         printf("%d ",root->data);  
         InOrderTraverse(root->rchild);  
       }  
     }  
     void PostOrderTraverse(BiTree root){  

	    if(root){  
	  
		    PostOrderTraverse(root->lchild);  
		  
		    PostOrderTraverse(root->rchild);  
		  
		    printf("%d ",root->data);  
	  
	    }  
     }  
  
    
  
int main()  
{  
  
    BiTree T;  
    int num[101];  
    int n;  
    while(scanf("%d",&n)!=EOF){  
  
	    int i;  
	  
	    T=NULL;  
  
    //-------------ѭ�����������------------  
  
	    for(i=1;i<=n;++i) {  
		  
		    scanf("%d",&num[i]);  
		  
		    InsertBST(T,num[i]);  
	  
	    }  
     //printf("\n");  
  
	    PreOrderTraverse(T);  
	  
	    printf("\n");  
	  
	    InOrderTraverse(T);  
	  
	    printf("\n");  
	  
	    PostOrderTraverse(T);  
	  
	    printf("\n");  
  
    }  
  
    return 0;  
}  
  
    
  
     int SearchBST(BiTree root,int data,BiTree f,BiTree &p)  
     {  
  
	    if(!root){  //�����Ϊ�� ����ָ��f  
	  
	    	p=f;  
	  
	    	return -1;  
  
    	}  
  
	    else if(data==root->data) { //������  
		  
		    p=root;  
		  
		    return 1;  
	  
	    }  
  
	    else if(data<root->data)  
	  
	     return SearchBST(root->lchild,data,root,p);  
	  
	    else if(data>root->data){  
	  
	    return SearchBST(root->rchild,data,root,p);  
	  
	    }  
  
    return 0;  
     }  
  
