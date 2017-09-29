#include<iostream> 
#include<stdlib.h>  
using namespace std;  
//-----------二叉树的存储结构-----------  
typedef struct BiTNode{  
    int data;  
    struct BiTNode *lchild,*rchild;  
     }* BiTree;  
     //-------------基本操作--------  
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
     //查找二叉树中是否存在一个值和data相等，相等则返回true,否则返回false  
  
    
  
  
    在根指针root所指向的二叉排序树中递归地查找其关键字等于data的数据元素，  
  
    若查找成功，则指针p指向该数据元素结点，并返回true，  
  
    否则指针p指向查找路径上访问的最后一个结点并返回false指针，指针f指向root的双亲，其初始调用值NULL  
     */  
     int SearchBST(BiTree root,int data,BiTree f,BiTree &p);  
  
    
  
     //inline void InsertBST(BiTree &root,int data)  
    //root为传引用指针  
     void InsertBST(BiTree &root,int data)  
     {  
       BiTree p,s;  
       if(-1==SearchBST(root,data,NULL,p))  //查找不成功  
       {  
         s=(struct BiTNode *)malloc(sizeof(BiTNode));  
         s->data=data;  
         s->lchild=s->rchild=NULL;  
         if(p==NULL)  //二叉排序树为空的时候，被插入结点*s为新的根结点  
           root=s;  
         else if(LT(data,p->data))      //被插结点*s为左孩子  
           p->lchild=s;  
         else      //被插结点*s为右孩子  
           p->rchild=s;  
       }  
       return ;  
     }  
     //--------------------三种遍历方法  
     void PreOrderTraverse(BiTree root){  

	    if(root){  
	  
		    printf("%d ",root->data);  
		  
		    PreOrderTraverse(root->lchild);  
		  
		    PreOrderTraverse(root->rchild);  
	  
	    }  
     }  
     void InOrderTraverse(BiTree root)  //中序遍历  
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
  
    //-------------循环构造二叉树------------  
  
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
  
	    if(!root){  //如果树为空 ，则指向f  
	  
	    	p=f;  
	  
	    	return -1;  
  
    	}  
  
	    else if(data==root->data) { //树不空  
		  
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
  
