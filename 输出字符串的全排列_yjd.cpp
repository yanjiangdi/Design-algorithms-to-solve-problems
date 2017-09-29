#include<iostream>  
#include <cstring>
using namespace std;  
#include<assert.h>  
  
void Permutation(char* pStr, char* pBegin)  
{  
    assert(pStr && pBegin);  
  
    if(*pBegin == '\0')  
        printf("%s\n",pStr);  
    else  
    {  
        for(char* pCh = pBegin; *pCh != '\0'; pCh++)  
        {  
            swap(*pBegin,*pCh);  
            Permutation(pStr, pBegin+1);  
            swap(*pBegin,*pCh);  
        }  
    }  
}  


int main() {
    string str;
    while (cin>>str)
    {
    	char *ch=new char(str.length()+1);
		strcpy(ch,str.c_str());
    	Permutation(ch,ch);   
    }
    return 0;
}
