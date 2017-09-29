#include <iostream>
#include <vector>
using namespace std;
 
int root[100]={-1};
int dis[100][100]={-1};
int findRoot(int a) {
    if (root[a]==-1) return a;
    else return root[a]=findRoot(root[a]);
}
 
void join(int a,int b) {
    int rootA=findRoot(a), rootB=findRoot(b);
    if (rootA==rootB) return;
    root[rootA]=rootB;
}
 
int pow(int base,int k) {
    int ans=1;
    while (k--) ans=ans*base%100000;
    return ans;
}
 
int main(int argc, const char * argv[]) {
    int n,m,a,b;
    cin>>n>>m;
        fill(root, root+m, -1);
        for (int i=0; i<n; ++i) {
            fill(dis[i], dis[i]+n, -1);
            dis[i][i]=0;
        }
        for (int i=0; i<m; ++i) {
            cin>>a>>b;
            int A=findRoot(a),B=findRoot(b);
            if (A==B) continue;
            int currentDis=pow(2, i);
            for (int i=0; i<n; ++i) {
                if (A!=findRoot(i)) continue;
                for (int j=0; j<n; ++j) {
                    if (B!=findRoot(j)) continue;
                    dis[i][j]=dis[j][i]=(dis[i][a]+dis[b][j]+currentDis)%100000;
                }
            }
            join(a, b);
        }
        int finalRoot=findRoot(0);
        for (int i=1;i<n;++i) {
            if (findRoot(i)!=finalRoot) cout<<-1<<endl;
            else cout<<dis[0][i]<<endl;
         
    }
    

}
