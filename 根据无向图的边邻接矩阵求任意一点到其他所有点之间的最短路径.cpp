#include <iostream> 
#include <cmath>
using namespace std;
#define INFINITY 1000000000 //�洢����ͼ���ޱ�����֮��ľ���
#define MAX 100 			//�洢������ͼ���ĵ���Ϊ500
long long arr[MAX][MAX]; 


void ShortestPath_DIJ(int n,int v0, int p[MAX][MAX], int D[MAX],long long arr[MAX][MAX]) {  //����v0���������е�֮������·����
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
    
    for(int i=0;i<n;i++)                             //���v0���������е�֮������·��
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
		cout<<"����������ͱ���:"; 
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
		cout<<"������ÿ���ߵ��ڽӵ㼰���ڱߵľ��룺"<<endl; 
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
		cout<<"��������ʼ��:";
		cin>>v0;
		cout<<v0<<"�㵽����������֮�����̾���Ϊ��"<<endl ;
		ShortestPath_DIJ(n,v0,p,D,arr);
		
	}
	return 0;
}
