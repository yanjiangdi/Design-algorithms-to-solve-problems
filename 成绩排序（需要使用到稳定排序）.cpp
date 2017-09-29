#include <iostream>
#include <algorithm>
using namespace std;
struct Student
{
	string name;
	int score ;
}s[10000] ;
bool cmp_0(Student s1,Student s2)
{
	return s1.score>s2.score;
}
bool cmp_1(Student s1,Student s2)
{
	return s1.score<s2.score;
} 
int main()
{
	int num,de;
	while(cin>>num)
	{
		cin>>de;
		for(int i=0;i<num;i++)
		{
			cin>>s[i].name>>s[i].score;
		}
		if(de==0)
		{
			stable_sort(s,s+num,cmp_0);
			for(int i=0;i<num;i++)
			{
				cout<<s[i].name<<" "<<s[i].score<<endl;
			}
		 } 
		 else if(de==1)
		{
			stable_sort(s,s+num,cmp_1);
			for(int i=0;i<num;i++)
			{
				cout<<s[i].name<<" "<<s[i].score<<endl;
			}
		 } 
	}
	return 0;
}
