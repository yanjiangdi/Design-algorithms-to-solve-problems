
#include <algorithm>  
#include <iostream>  
using namespace std;  
struct NUMBER{  
    int x, y;  
};  
 
   
bool cmp( NUMBER a, NUMBER b ){  
    if( a.x == b.x )  
        return a.y < b.y;  
    else return a.x < b.x;  
   
};  
   
int main()  
{  
    int i,n;  
    while( (cin >> n)!=NULL ){  
    	while(n>1000 )
    	{
    		cin>>n;
		}
    	NUMBER a[n]; 	
        for( i=0; i<n; i++ )  
            cin >> a[i].x >> a[i].y;  
        sort(a,a+n,cmp);  
        cout << a[0].x << " " << a[0].y << endl;  
    }  
    return 0;  
} 
