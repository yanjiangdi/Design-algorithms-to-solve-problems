

#include <stdio.h>  
  
    
  
     int a[2005];  
  
    
  
     int main()  
     {  
  
    int n, i, t1, t2, first = 1, max = -1, min = 10005;  
  
    
  
  
    scanf("%d", &n);  
  
    for(i = 0; i < n; ++i)  
  
    {  
  
    scanf("%d%d", &t1, &t2);  
  
    t2 += 1000;  
  
    a[t2] += t1;  
  
    if(t2 > max)max = t2;  
  
    if(t2 < min)min = t2;  
  
    }  
  
    
  
  
    scanf("%d", &n);  
  
    for(i = 0; i < n; ++i)  
  
    {  
  
    scanf("%d%d", &t1, &t2);  
  
    t2 += 1000;  
  
    a[t2] += t1;  
  
    if(t2 > max)max = t2;  
  
    if(t2 < min)min = t2;  
  
    }  
  
    
  
  
    for(i = max; i >= min; --i)  
  
    {  
  
    if(a[i])  
  
    {  
  
    if (first)  
  
    {  
  
    first = 0;  
  
    }  
  
    else  
  
    {  
  
    putchar(' ');  
  
    }  
  
    printf("%d %d", a[i], i - 1000);  
  
    }  
  
    }  
  
    putchar('\n');  
  
    return 0;  
     }  


