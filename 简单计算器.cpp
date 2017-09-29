#include <iostream>
#include <cstdio>
using namespace std;
 
inline int Cmp(const char & c){
    if(c == '+' || c == '-'){
        return 1;
    }
    return 2;
}
 
inline double Count(const double & a, const double & b, const char & c){
 
    switch(c){
        case '+' :{
            return a + b;
        }
        case '-' :{
            return a - b;
        }
        case '*' :{
            return a * b;
        }
        case '/' :{
            if(!b){
                throw 0;
            }
            return a / b;
        }
    }
    return 0;
}
 
inline double Calculate(const char *str){
 
    int len = 0, numIndex = -1, chIndex = -1;
    double narrNum[8], num = 0, result;
    char ch[8];
 
    while(str[len]){
        if(str[len] >= '0' && str[len] <= '9'){
            do{
                num = num * 10 + str[len] - '0';
            }while(str[++len] >= '0' && str[len] <= '9');
            narrNum[++numIndex] = num;
            num = 0;
        }else if(str[len] == '+' || str[len] == '-' || str[len] == '*' || str[len] == '/'){
            while(chIndex >= 0 && Cmp(ch[chIndex]) >= Cmp(str[len])){
                result = Count(narrNum[numIndex - 1], narrNum[numIndex], ch[chIndex]);
                narrNum[--numIndex] = result;
                --chIndex;
            }
            ch[++chIndex] = str[len++];
        }else{
            ++len;
        }
    }
    while(chIndex >= 0){
        result = Count(narrNum[numIndex - 1], narrNum[numIndex], ch[chIndex]);
        narrNum[--numIndex] = result;
        --chIndex;
    }
 
    return result;
}
 
int main(void){
 
    char str[200];
 
    while(gets(str) && (str[0] != '0'))
        try{
            printf("%.2f\n", Calculate(str));
        }catch(int){
            printf("error\n");
        }
 
    return 0;
}


