#include<iostream>
using namespace std;
 
int main()
{
    int num;
    while(cin>>num)
    {
        int x,y,z;
        bool isFind=false;
        cin>>x>>y>>z;
        int mid=x*1000+y*100+z*10;
        for(int i=9;i>0;--i)
        {
            for(int j=9;j>=0;--j)
            {
                int temp=i*10000+mid+j;
                if(temp % num==0)
                {
                    isFind=true;
                    cout<<i<<' '<<j<<' '<<temp/num<<endl;
                    break;
                }
            }
            if(isFind)
                break;
        }
        if(!isFind)
            cout<<0<<endl;
    }
	return 0; 
}
