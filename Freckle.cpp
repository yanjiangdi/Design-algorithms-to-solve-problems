#include<iostream>
#include <iomanip>
#include<string>
#include <string.h>
#include<math.h>
#include<vector>
#include<sstream>
#include<algorithm>
#include<stack>
#include<queue>
#include<functional>
using namespace std;
 
int Tree[101];
 
int findRoot(int x)
{
    if (Tree[x]==-1)
    {
        return x;
    }
    int tmp = findRoot(Tree[x]);
    Tree[x] = tmp;
    return tmp;
}
 
struct point
{
    double x;
    double y;
    double getDistance(point A)
    {
        double ans = (x - A.x)*(x - A.x) + (y - A.y)*(y - A.y);
        return sqrt(ans);
    }
}Points[101];
 
struct edge
{
    int a;
    int b;
    double length;
    bool operator <(const edge &E) const{
        return length < E.length;
    }
}Edges[6000];
 
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        for (int i = 1; i <= n;i++)
        {
            scanf("%lf%lf", &Points[i].x, &Points[i].y);
            Tree[i] = -1;
        }
        int size = 0;
        for (int i = 1; i <= n;i++)
        {
            for (int j = i+1; j <= n;j++)
            {
                Edges[size].a =i;
                Edges[size].b = j;
                Edges[size].length = Points[i].getDistance(Points[j]);
                size++;
            }
        }
        sort(Edges, Edges + size-1);
        double ans = 0;
        for (int i = 0; i < size;i++)
        {
            int a = findRoot(Edges[i].a);
            int b = findRoot(Edges[i].b);
            if (a!=b)
            {
                Tree[a] = b;
                ans += Edges[i].length;
            }
        }
        printf("%.2lf\n", ans);
    }
    return 0;
}
