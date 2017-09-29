//ц╟ещеепР
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
 
bool letter(char a){                            
    if(a >= 'a' && a <= 'z')
        return true;
    if(a >= 'A' && a <= 'Z')
        return true;
    return false;
}
 
char change(char a){                            
    if(a >= 'A' && a <= 'Z')
        a = a - 'A' + 'a';
    return a;
}
 
void sorts(char s[]){                           
    int now;
    for(int i = strlen(s) - 1; i > 0; i --){
        for(int j = 0; j < i; j ++){
            if(!letter(s[j])){                 
                continue;
            }
            now = j + 1;
            while(!letter(s[now])){            
                now ++;
                if(now > i)
                    break;
            }
            if(change(s[j]) > change(s[now]) && now <= i){
                swap(s[j], s[now]);             
            }
        }
    }
}
int main()
{
    char s[1000];
    while(gets(s)){
        sorts(s);
        puts(s);
    }
    return 0;
}

