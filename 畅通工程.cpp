#include "iostream"
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <vector>
#include <algorithm>
 
#pragma warning (disable:4996);
using namespace std;
#define MAX_TREE 1001
 
int findRoot(int tree[MAX_TREE],int i)
{
    if (tree[i] == -1) return i;
    return findRoot(tree,tree[i]);
}
 
int main() {
    int tree[MAX_TREE],town,roadnum;
    while (1)
    {
        scanf("%d",&town);
        if (!town) break;
        scanf("%d",&roadnum);
        memset(tree,-1,sizeof(tree));
        int town1, town2,root1,root2;
 
        for (int i = 0; i < roadnum; i++)
        {
            scanf("%d %d", &town1, &town2);
            root1 = findRoot(tree,town1);
            root2 = findRoot(tree, town2);
            if (root1 != root2)
                tree[root1] = root2;
        }
        int rootnum = 0;
        for (int i = 1; i <= town; i++)
        {
            if (tree[i] == -1) rootnum++;
        }
        printf("%d\n",(rootnum-1));
    }
    return 0;
}
