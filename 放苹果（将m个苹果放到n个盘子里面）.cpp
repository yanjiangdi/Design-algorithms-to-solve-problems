#include <iostream>
using namespace std;
int s(int m ,int n)
{
    if(m==0||n==1){
        return 1;
    }
    if(m<n)
    {
        return s(m,m);
    }
    if(m>=n) {
        return s(m, n - 1) + s(m - n, n);
    }
    return 0; 
}
int main() {
	int c; 
    while(cin>>c)
    {
    	for(int i=0;i<c;i++)
    	{
    		int m,n;
    		cin>>m>>n;
    		cout<<s(m,n)<<endl;
		}
        
    }
    return 0;
}

