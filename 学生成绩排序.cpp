#include <iostream>
#include <algorithm>
using namespace std;
struct Student
{
	int sid;
	int score;
}stu[100];
bool cmp(Student s1,Student s2)
{
	if(s1.score!=s2.score)
	{
		return s1.score<s2.score;
	}
	return s1.sid<s2.sid;
}
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>stu[i].sid>>stu[i].score;
		}
		sort(stu,stu+n,cmp);
		for(int i=0;i<n;i++)
		{
			cout<<stu[i].sid<<" "<<stu[i].score<<endl;
		}
		
	}
	return 0;
}
