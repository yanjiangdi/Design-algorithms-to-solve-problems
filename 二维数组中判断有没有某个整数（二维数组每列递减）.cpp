#include <iostream>
#include <vector>
using namespace std;
 bool Find(int target, vector<vector<int> > array) {
        for(int i=0;i<array.size();i++)
        {
        	for(int j=0;j<array[i].size();j++)
        	{
 				 
					if(array[i][j]==target)
					{
						return true;
					}
					
				
			}
		}
		return false;
    }
int main()
{
	vector<vector<int> > array(4);
	for(int   i=0;i <4;i++) 
                array[i].resize(4);//设置数组的大小3X3 
	for(int i=0;i<array.size();i++)
        {
        	for(int j=0;j<array[i].size();j++)
        	{
 				 
        		cin>>array[j][i];
			}
		}
		for(int i=0;i<array.size();i++)
        {
        	for(int j=0;j<array[i].size();j++)
        	{
 				 
        		cout<<array[i][j]<<" ";
			}
			cout<<endl;
		}
	int n;
	cin>>n;
	cout<<Find(n,array)<<endl;
	
	
	return 0;
 } 
