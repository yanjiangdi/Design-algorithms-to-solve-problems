#include <iostream> 
#include <string> 
#include <cstring> 
#include <algorithm> 
using namespace std; 

struct COMPLEX{ 
	int a, b; 
}; 
COMPLEX c[1000]; 

int StringToNum( string s ){ 
	int i, len, r; 
	len = s.length(); 
	for( i=0; i<len; i++ ){ 
		if( i==0 ) 
			r = s[i]-48; 
		else r = r*10 + s[i]-48; 
	} 
	return r; 
}; 

int module( COMPLEX x ){ 
	return x.a*x.a+x.b*x.b; 
}; 

bool cmp( COMPLEX x, COMPLEX y ){ 
	int xm = module(x), ym = module(y); 
	if( xm==ym ) 
		return x.a < y.a; 
	return xm < ym; 
}; 

int main() 
{ 
	int i, j, k, n, m; 
	int len, size; 
	string t, s, temp, aS, bS; //t=命令 
	while( cin >> n ){ 
		size = 0; 
		for( i=0; i<n; i++ ){ 
			cin >> t; 
			if( t == "Pop" ){ 
			//cout << "i=" << i << " ";// 
				if( size == 0 ) 
					cout << "empty\n"; 
				else{ 
					sort(c,c+size,cmp); 
					cout << c[size-1].a << "+i" << c[size-1].b << endl; 
					size--; 
					cout << "SIZE = " << size << endl; 
				} 
			} 
			else{ //Insert命令 
				cin >> s; 
				len = s.length(); 
				for( j=0; j<len; j++ ) 
					if( s[j]=='+' ) 
						break; 
					aS = s.substr(0,j); 
					bS = s.substr(j+2); //不给出长度就默认到结尾 
					c[size].a = StringToNum(aS); 
					c[size].b = StringToNum(bS); 
					size++; 
					cout << "SIZE = " << size << endl; 
				} 
		}// for 
	} 
	return 0; 
}
