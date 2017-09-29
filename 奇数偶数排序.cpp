#include <iostream>
#include <map>
using namespace std;
int main()
{
	int num[10];
	while(cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]>>num[5]>>num[6]>>num[7]>>num[8]>>num[9])
	{
		int ji[10];
		int ou[10];
		int i_j=0,j_ou=0;
		for(int i=0;i<10;i++)
		{
			if(num[i]%2==0)
			{
				ou[j_ou]=num[i];
				j_ou++;
			}
			else
			{
				ji[i_j]=num[i];
				i_j++;
			}
		}
		
		for(int i=0;i<i_j;i++)
		{
			for(int j=0;j<i_j-1-i;j++)
			{
				if(ji[j]<ji[j+1])
				{
					int temp=ji[j];
					ji[j]=ji[j+1];
					ji[j+1]=temp;
				 } 
			}
		}
		for(int i=0;i<j_ou;i++)
		{
			for(int j=0;j<j_ou-1-i;j++)
			{
				if(ou[j]>ou[j+1])
				{
					int temp=ou[j];
					ou[j]=ou[j+1];
					ou[j+1]=temp;
				 } 
			}
		}
		for(int i=0;i<i_j;i++)
		{
			cout<<ji[i]<<" ";
		}
		for(int i=0;i<j_ou-1;i++)
		{
			cout<<ou[i]<<" ";
		}
		cout<<ou[j_ou-1]<<endl;
		
		
	}
	return 0;
}
