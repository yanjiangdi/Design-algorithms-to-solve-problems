#include"stdio.h"
#include"string.h"
int main(){
    char d[1001];
    int index_z,index_j,a,b,c;
    while(~scanf("%s",d)){
        index_z=-1;
        int i;
        index_j=-1;
        for(i=0;i<strlen(d);i++){
            if(d[i]=='z')
                index_z=i;
            if(d[i]=='j')
                index_j=i;
        }
        if(index_z==-1||index_j==-1)
            printf("Wrong Answer\n");
        else{
            a=index_z;
            b=index_j-index_z-1;
            c=i-index_j-1;
            if (b==0)
            {
                printf("Wrong Answer\n");
            }
            else if (a*b == c)
            {
                printf("Accepted\n");
            }
            else
            {
                printf("Wrong Answer\n");
            }
        }
    }
}
