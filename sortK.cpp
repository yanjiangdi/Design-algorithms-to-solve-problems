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
	Book book1[N]={ {"23924-1","计算机导论",26.5,120},
	{"13956-3","高等数学",31,195},
	{"87623-8","线性代数",28,267},
	{"56721-2","普通物理",42,102},
	{"34781-9","数据结构",22.5,298}
	};
	sort(book1,book1+N,cmp);
	display(book1,N);
	return 0;
} 

		void display(Book bk[],int len){
			cout<<"书号\t书名\t\t单价\t库存量"<<endl;
				for(int i=0;i<len;++i){
					cout<<bk[i].isbn<<"\t"<<bk[i].name<<"\t";
					cout<<bk[i].price<<"\t"<<bk[i].stock<<endl;
				}
		}