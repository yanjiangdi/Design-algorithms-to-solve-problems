#include <iostream>                          
#include <stdlib.h>                          
#include <cstring>
using namespace std;                                                      
int main() {                              
    int alpha[26] = {                                  
        1, 2, 3,    // a, b, c                                  
        1, 2, 3,    // d, e, f                                  
        1, 2, 3,    // g, h, i                                  
        1, 2, 3,    // j, k, l                                  
        1, 2, 3,    // m, n, o                                  
        1, 2, 3, 4, // p, q, r, s                                 
        1, 2, 3,    // t, u, v                                 
        1, 2, 3, 4 // w, x, y, z                             
    }; //存储输入每个小写字母时需要的时间                                                          
    int keys[26] = {                                  
        1, 1, 1, // a, b, c                                 
        2, 2, 2, // d, e, f                                  
        3, 3, 3, // g, h, i                                 
        4, 4, 4, // j, k, l                                
        5, 5, 5, // m, n, o                                
        6, 6, 6, 6, // p, q, r, s                               
        7, 7, 7, // t, u, v                               
        8, 8, 8, 8// w, x, y, z                              
    }; // 对字母进行分组，以确定在一个按键上面的字母                                                         
    char pre; // 存储前一个字母                             
    char str[110];                             
    int times; //所需要的输入次数                                     
    while(cin>>str) {                               
        times = 0;                               
        int i;                                  
        pre = '#';                                 
        for(i=0; i<strlen(str); i++)  {                                    
            if(keys[pre-97] == keys[str[i]-97]) {                         
                times += 2; //相同字母需要等待的时间                          
            }                                     
            times += alpha[str[i] - 97];                                   
            pre = str[i];                                 
        }                      
        cout<<times<<endl;                             
    }                                                         
    return 0;                         
}


