#include<iostream>
#include <algorithm>
#include<string.h>
using namespace std;
const int N=5;
struct Book {
	string isbn;
	string name;
	double price;
	int stock;
};
bool cmp(Book b1,Book b2)
{
	return b1.stock>b2.stock;
}
void display(Book bk[],int len);
int main(){
	Book book1[N]={ {"23924-1","���������",26.5,120},
	{"13956-3","�ߵ���ѧ",31,195},
	{"87623-8","���Դ���",28,267},
	{"56721-2","��ͨ����",42,102},
	{"34781-9","���ݽṹ",22.5,298}
	};
	sort(book1,book1+N,cmp);
	display(book1,N);
	return 0;
} 

		void display(Book bk[],int len){
			cout<<"���\t����\t\t����\t�����"<<endl;
				for(int i=0;i<len;++i){
					cout<<bk[i].isbn<<"\t"<<bk[i].name<<"\t";
					cout<<bk[i].price<<"\t"<<bk[i].stock<<endl;
				}
		}