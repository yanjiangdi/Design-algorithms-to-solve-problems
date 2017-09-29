#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
    int n;
    while(cin>>n && n){
    	int sc;
		while(n>1000)
		{
			cin>>n;
		}
		int s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		cin>>sc;
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]==sc)
			{
				count++;
			}
		}
		cout<<count<<endl;
		
		
    }
    return 0;
}
