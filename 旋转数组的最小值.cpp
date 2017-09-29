#include <iostream>
#include <vector>
using namespace std;
int minNumberInRotateArray(vector<int> rotateArray) 
{
		if(rotateArray.size()==0)
		{
			return 0;
		}
		int min;
		for(int i=0;i<rotateArray.size()-1;i++)
		{
			if(rotateArray[i]>rotateArray[i+1])
			{
				min=rotateArray[i+1]<rotateArray[0]?rotateArray[i+1]:rotateArray[0];
			}
		 } 
		 
		 return min; 
}

int main()
{
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	cout<<minNumberInRotateArray(v)<<endl;
	return 0;
 } 
