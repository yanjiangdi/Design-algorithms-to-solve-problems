#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
}myStudent[1000];
bool cmp(Student s1,Student s2);
int main()
{
	int n;
	while(cin>>n)
	
	{
		while(n<1 || n>1000)
		{
			cin>>n;
		}
		for(int i=0;i<n;i++)
		{
			cin>>myStudent[i].name>>myStudent[i].age>>myStudent[i].score;
		}
		
		sort(myStudent,myStudent+n,cmp);
		for(int i=0;i<n;i++)
		{
			cout<<myStudent[i].name<<" "<<myStudent[i].age<<" "<<myStudent[i].score<<endl;
		}
		
	}
	return 0;
}

bool cmp(Student s1,Student s2)
{
	if(s1.score!=s2.score)
	{
		return s1.score<s2.score;
	}
	if(s1.name!=s2.name)
	{
		return s1.name<s2.name;
	}
	else return s1.age<s2.age;
}
