#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
using namespace std;
int main(void) {
    string str;
    while(getline(cin,str)){
        map<string,string> word1;
        map<string,string> word2;
        do{
            if(str == "@END@") break;
            int t1 = str.find("[",0);
            int t2 = str.find("]",0);
            string key = str.substr(t1+1,t2-1);
            string value = str.substr(t2+2);
            word1[key] = value;
            word2[value] = key;
        }while(getline(cin,str));  
        int m;
        cin >> m;
        getchar();
        for(int i = 0;i < m;i++) {
            getline(cin,str);
            string result;
            if(str[0]=='[') {
                string s = str.substr(1,str.find(']',0)-1);
                result = word1[s];
            }else {
                result = word2[str];
            }
            if(result.empty()){
                cout << "what?" << endl;
            }else{
                cout << result << endl;
            }  
        }
    }
    return 0;
}