#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct LNode{
	int data;
	struct LNode* next;
}LNode;

/* β�巨���� ��ͷ�ڵ㵥���� */
LNode * CreateList(LNode *L,int n){
	int x;
	L=(LNode*)malloc(sizeof(LNode)); //����ͷ��� 
	LNode *s,*r=L; //rΪ��βָ�� 
	for(int i=0;i<n;i++){
		scanf("%d",&x);
			s = (LNode*)malloc(sizeof(LNode));
			s->data = x;
			r->next = s; 
			r = s; // r ָ���µı�β�ڵ� 
		}
		r->next=NULL; //ǧ��Ҫ���ˣ�����βָ��ָ��NULL 
		return L; 
	} 
/* ���������������� */
LNode* InSort(LNode *L){
	LNode *p = L->next;
	LNode *pre = NULL; 
	LNode *r = p->next; //r����p�ĺ�̽ڵ�ָ�룬�Ա�֤������ 
	p->next = NULL; //����ֻ��һ�����ݵ������
	p = r;
	while(p!=NULL){
		r = p->next; //����p�ĺ�̽ڵ�ָ��
		pre = L;
		while(pre->next!=NULL && pre->next->data < p->data){
			pre = pre->next; //��������в��Ҳ��� *p ��ǰ���ڵ� *pre 
		}
		p->next = pre->next; //�� *p ͷ�巨���� *pre֮�� 
		pre->next = p;
		p = r; //ɨ��ԭ��������ʣ�µĽ�� 
	} 
	return L;
} 

/* ��ӡ������ */
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
