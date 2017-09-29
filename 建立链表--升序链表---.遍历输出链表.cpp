#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct LNode{
	int data;
	struct LNode* next;
}LNode;

/* 尾插法创建 带头节点单链表 */
LNode * CreateList(LNode *L,int n){
	int x;
	L=(LNode*)malloc(sizeof(LNode)); //建立头结点 
	LNode *s,*r=L; //r为表尾指针 
	for(int i=0;i<n;i++){
		scanf("%d",&x);
			s = (LNode*)malloc(sizeof(LNode));
			s->data = x;
			r->next = s; 
			r = s; // r 指向新的表尾节点 
		}
		r->next=NULL; //千万不要忘了，最后把尾指针指向NULL 
		return L; 
	} 
/* 将单链表按升序重排 */
LNode* InSort(LNode *L){
	LNode *p = L->next;
	LNode *pre = NULL; 
	LNode *r = p->next; //r保持p的后继节点指针，以保证不断链 
	p->next = NULL; //构造只含一个数据的有序表
	p = r;
	while(p!=NULL){
		r = p->next; //保持p的后继节点指针
		pre = L;
		while(pre->next!=NULL && pre->next->data < p->data){
			pre = pre->next; //在有序表中查找插入 *p 的前驱节点 *pre 
		}
		p->next = pre->next; //将 *p 头插法插入 *pre之后 
		pre->next = p;
		p = r; //扫描原单链表中剩下的结点 
	} 
	return L;
} 

/* 打印单链表 */
void Print(LNode *L){
	LNode *p = L->next;
	while(p->next != NULL){
		printf("%d ",p->data);
		p = p->next;
	}
	printf("%d",p->data);
} 
int main(){
	int n;
	LNode *L=NULL;
	while(scanf("%d",&n) != EOF){
		L = CreateList(L,n);
		L = InSort(L); 
		Print(L);
		printf("\n");
	} 
return 0;
}
