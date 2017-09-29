#include <stdio.h>
#include <stdlib.h>

#define maxn 1000+10

int arr[maxn];

int main()
{

    int n, i, temp, j;
    while(scanf("%d", &n) == 1) {

        for(i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }
        
        if(n==1)
        {
        	printf("%d \n",arr[0]);
        	printf("%d\n",-1);
		}
		else
		{
			
	        for(i=0; i<n; i++) {
	            for(j=0; j<n-i-1; j++) {
	                if(arr[j]>arr[j+1]) {
	                    temp = arr[j];
	                    arr[j] = arr[j+1];
	                    arr[j+1] = temp;
	                }
	            }
	        }
	
	        printf("%d\n", arr[n-1]);
	        int flag = 0;
	        for(i=0; i<n-1; i++) {
	            printf("%d ", arr[i]);
	            flag = 1;
	        }
	        if(flag){
	            printf("\n");
	        }
		}


    }

    system("pause");
    return 0;
}
