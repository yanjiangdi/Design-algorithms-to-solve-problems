#include <iostream>
#include <cstring>
using namespace std;

string rotateString(string A, int n, int p) 
{
        // write code here
       return  A.substr(p+1,n-p-1)+A.substr(0,p+1);
}
   
    int main()
	{
		string str;
		int n,p;
		while( 	cin>>str>>n>>p)
		{
        	cout<<rotateString(str,  n,  p)<<endl;
		}
		return 0;
	 } 
