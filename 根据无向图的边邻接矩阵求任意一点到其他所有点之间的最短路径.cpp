#include <iostream> 
#include <cmath>
using namespace std;
#define INFINITY 1000000000 //存储无向图中无边两点之间的距离
#define MAX 100 			//存储该无向图最多的点数为500
long long arr[MAX][MAX]; 


void ShortestPath_DIJ(int n,int v0, int p[MAX][MAX], int D[MAX],long long arr[MAX][MAX]) {  //计算v0到其他所有点之间的最短路径。
    int v, w, i, j, min;
    bool final[MAX];
    for(v=0; v<n; v++) {
        final[v]=false;
        D[v]=arr[v0][v];
        for(w=0; w<n; w++)
            p[v][w]=-1;
        if(D[v]<INFINITY) {
            p[v][0]=v0;
            p[v][1]=v;
        }
    }
 
    D[v0]=0;
    final[v0]=true;
 
    for(i=1; i<n; i++) {
        min=INFINITY;
        for(w=0; w<n; w++)
            if(!final[w] && D[w]<min) {
                v=w;
                min=D[w];
            }
        final[v]=true;
        for(w=0; w<n; w++) {
            if(!final[w] && min<INFINITY && arr[v][w]<INFINITY
             && (min+arr[v][w]<D[w])) {
                D[w]=min+arr[v][w];
                for(j=0; j<n; j++) {
                    p[w][j]=p[v][j];
                    if(p[w][j]==-1) {
                        p[w][j]=w;
                        break;
                    }
                }
 
            }
        }
    }
    
    for(int i=0;i<n;i++)                             //输出v0到其他所有点之间的最短路径
    {
    	if(i!=v0)
    	{
    		cout<<v0<<"------>"<<i<<": "<<D[i]<<endl;	
		}
		else
		{
			continue;
		}
    	
	}
}

int main()
{
	
	int n,k;
	while(true)
	{
		cout<<"请输入点数和边数:"; 
		cin>>n>>k;
		for(int m=0;m<n;m++)
		{
			for(int r=0;r<n;r++)
			{
				if(m==r)
				{
					arr[m][r]=0;
				}
				else
				{
					arr[m][r]=INFINITY;	
				}

			}
		}
		cout<<"请输入每条边的邻接点及所在边的距离："<<endl; 
		for(int m=0;m<k;m++)
		{
			int i,j,d;
			cin>>i>>j>>d;
			arr[i][j]=d;
			arr[j][i]=arr[i][j];
		}
		int p[MAX][MAX];
		int D[MAX];
		int v0;
		cout<<"请输入起始点:";
		cin>>v0;
		cout<<v0<<"点到其他各个点之间的最短距离为："<<endl ;
		ShortestPath_DIJ(n,v0,p,D,arr);
		
	}
	return 0;
}
