#include <stdio.h> 
    
int main(void) 
{ 
    int n; 
    long  a[10000]; 
    int i; 
    long  best, bestTmp; 
    long  bestL, bestR, bestTmpL, bestTmpR; 
    
    while (scanf("%d", &n) != EOF) 
    { 
        if (n == 0) 
            break; 
        for (i=0; i<n; i++) 
            scanf("%lld", &a[i]); 
    
        best = bestL = bestR = a[0]; 
        bestTmp = bestTmpL = bestTmpR = a[0]; 
        for (i=1; i<n; i++) 
        { 
            if (bestTmp < 0) 
                bestTmp = bestTmpL = bestTmpR = a[i]; 
            else 
            { 
                bestTmp += a[i]; 
                bestTmpR = a[i]; 
            } 
            if (bestTmp > best) 
            { 
                best = bestTmp; 
                bestL = bestTmpL; 
                bestR = bestTmpR; 
            } 
        }
         
        if(best==bestL && best == bestR && best<0)
        {
            best=0;
            bestL=a[0];
            bestR=a[n-1];
        }
    
        printf("%lld %lld %lld\n", best, bestL, bestR); 
    } 
    
    return 0; 
}
