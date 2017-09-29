#include <iostream>
#include <algorithm>
using namespace std;
struct student{
	string snum;
	string name;
	int score;
};
bool cmp1(const student &s1,const student &s2)
{
	return s1.snum<s2.snum;
}

bool cmp2(const student &s1,const student &s2)
{
	if(s1.name!=s2.name)
	{
		return 	s1.name<s2.name;
	}	
	else return s1.snum<s2.snum;
}

bool cmp3(const student &s1,const student &s2)
{
	if(s1.score!=s2.score)
	{
		return s1.score<s2.score;
	}
	else return s1.snum<s2.snum;
}

int  main()
{
	int n,c;
	int testCase=1;
	while(cin>>n>>c && n)
	{
		student s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i].snum>>s[i].name>>s[i].score;	
		}	
		if(c==1)	sort(s,s+n,cmp1);
		else if(c==2)	sort(s,s+n,cmp2);
		else sort(s,s+n,cmp3);
		cout<<"Case "<<testCase<<":"<<endl; 
		
			for(int i=0;i<n;i++)
			{
				cout<<s[i].snum<<" "<<s[i].name<<" "<<s[i].score<<endl;	
			}	
			
		testCase++;
		
	}
	return 0;
 } 
