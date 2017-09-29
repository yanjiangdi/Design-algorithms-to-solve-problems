#include <iostream>
using namespace std;
#define MAX 500
int matrix[MAX][MAX];
void sx(int mat[][MAX] ,int n)
{

		int  temp[n][n];
         
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                temp[j][n-1-i]=mat[i][j];               
            }
        }       
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<temp[i][j]<<" ";              
            }
            cout<<endl;
        }            
    }
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>matrix[i][j];
			}
			
		}
		sx(matrix,n);
	}
	return 0;
}
