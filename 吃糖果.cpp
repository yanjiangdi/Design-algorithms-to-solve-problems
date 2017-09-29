#include <iostream>
using namespace std;
int s(int n)
{
    if(n==1 || n==2){
        return n;
    }
    else
    {
        return s(n-1)+s(n-2);
    }

}
int main() {
    int n;
    while(cin>>n)
    {
        cout<<s(n)<<endl;
    }
    return 0;
}