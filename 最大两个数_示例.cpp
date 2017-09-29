#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include <limits.h>  

typedef struct Matrixs{  
    int value;//数值  
    int row;//行数  
}Matrixs;  

int main()  
{  
    int i,j,n,k,first;  
    Matrixs Matrix[4][5];  
    Matrixs Matrix2[2][5];  
    while(scanf("%d",&n) != EOF){  
        for(k = 0;k < n;k++){  
            //输入数据  
            for(i = 0;i < 4;i ++){  
                for(j = 0;j < 5;j++){  
                    scanf("%d",&Matrix[i][j].value);  
                    Matrix[i][j].row = i;  
                }  
            }  
            //最大的两个数放在前两位  
            Matrixs temp;  
            for(j = 0;j < 5;j++){  
                //初始化最小值  
                Matrix2[0][j].value = INT_MIN;  
                Matrix2[1][j].value = INT_MIN;  
                //每列最大的两个数  
                for(i = 0;i < 4;i++){  
                    if(Matrix[i][j].value > Matrix2[0][j].value){  
                        Matrix2[0][j] = Matrix[i][j];  
                    }  
                }  
                for(i = 0;i < 4;i++){  
                    if(Matrix2[0][j].row != Matrix[i][j].row && Matrix[i][j].value > Matrix2[1][j].value){  
                        Matrix2[1][j] = Matrix[i][j];  
                    }  
                }  
            }  
            //保留原矩阵的行列顺序  
            for(j = 0;j < 5;j++){  
                if(Matrix2[0][j].row > Matrix2[1][j].row){  
                    temp = Matrix2[0][j];  
                    Matrix2[0][j] = Matrix2[1][j];  
                    Matrix2[1][j] = temp;  
                }  
            }  
            //输出  
            for(i = 0;i < 2;i++){  
                for(j = 0;j < 5;j++){  
                    printf("%d ",Matrix2[i][j].value);  
                }  
                printf("\n");  
            }  
        }  
    }  
    return 0;  
}  
