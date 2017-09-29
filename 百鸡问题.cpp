#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        for(int x=0;x<=100;x++)
            for(int y=0;y<=100-x;y++)
            {
                int z=100-x-y;
                if(z+y*3*3+x*3*5<=3*n)
                    cout<<"x="<<x<<","<<"y="<<y<<","<<"z="<<z<<endl;
            }
    }
    return 0;
}
