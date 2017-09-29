#include<iostream>
#include<string.h>
using namespace std;
const int MAX = 1000000;
void findChar(char* s)
{  
    if(s==NULL)
       return;
    int hash[256], len = strlen(s);
    memset(hash,0,sizeof(hash));
    int i;
    for(i=0;i<len;i++)
        hash[s[i]]++;
    for(i=0;i<len;i++)
    {
        if(hash[s[i]]==1)
        {
           printf("%c\n",s[i]);
           break;
        }
    }
    if(i==len)
        return;
}
int main( )
{
     char s[MAX];
     int num;
     cin>>num;
     while(num--)
     {
        scanf("%s",s);
        findChar(s);
     }
     return 0;
 }
