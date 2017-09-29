#include <iostream>
#define MaxSize 1000000
using namespace std; 
int main() {    
    int a[MaxSize + 1], N;   
    a[0] = a[1] = 1;   
    for (int i = 2; i <= MaxSize; i++)   
        if (i % 2 == 0)         
            a[i] = (a[i - 1] + a[i / 2]) % 1000000000;  
    else           
        a[i] = a[i - 1];   
    while (cin >> N)      
        cout << a[N] << endl;
    return 0;
}

