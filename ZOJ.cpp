#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
 
using namespace std;
 
bool cmp(char a, char b){
    return a > b;
}
int main()
{
    char zoj[101], *z, *o, *j;
    while(gets(zoj) && zoj[0] != 'E'){
        sort(zoj, zoj + strlen(zoj), cmp);
        z = zoj;
        while(*z != 'Z' && *z != '\0')
            z ++;
        o = zoj;
        while(*o != 'O' && *o != '\0')
            o ++;
        j = zoj;
        while(*j != 'J' && *j != '\0')
            j ++;
        while(*z == 'Z' || *o == 'O' || *j == 'J'){
            if(*z == 'Z'){
                cout << 'Z';
                z ++;
            }
            if(*o == 'O'){
                cout << 'O';
                o ++;
            }
            if(*j == 'J'){
                cout << 'J';
                j ++;
            }
        }
        cout << endl;
    }
    return 0;
}

