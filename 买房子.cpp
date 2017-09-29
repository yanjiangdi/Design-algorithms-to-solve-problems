#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n,k;
    while(cin>>n>>k)
    {
        int count=1;
        double sum=200;
        double l=(double)k/100;
        while((count*n)<sum)
        {
            sum=200*pow((1+l),count);
            count++;
            if(count>21)
            {
                cout<<"Impossible"<<endl;
                break;
            }
        }
        if(count<=21)
        {
            cout << count << endl;
        }
    }
    return 0;
}