#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include <limits.h>  

typedef struct Matrixs{  
    int value;//��ֵ  
    int row;//����  
}Matrixs;  

int main()  
{  
    int i,j,n,k,first;  
    Matrixs Matrix[4][5];  
    Matrixs Matrix2[2][5];  
    while(scanf("%d",&n) != EOF){  
        for(k = 0;k < n;k++){  
            //��������  
            for(i = 0;i < 4;i ++){  
                for(j = 0;j < 5;j++){  
                    scanf("%d",&Matrix[i][j].value);  
                    Matrix[i][j].row = i;  
                }  
            }  
            //��������������ǰ��λ  
            Matrixs temp;  
            for(j = 0;j < 5;j++){  
                //��ʼ����Сֵ  
                Matrix2[0][j].value = INT_MIN;  
                Matrix2[1][j].value = INT_MIN;  
                //ÿ������������  
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
            //����ԭ���������˳��  
            for(j = 0;j < 5;j++){  
                if(Matrix2[0][j].row > Matrix2[1][j].row){  
                    temp = Matrix2[0][j];  
                    Matrix2[0][j] = Matrix2[1][j];  
                    Matrix2[1][j] = temp;  
                }  
            }  
            //���  
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
