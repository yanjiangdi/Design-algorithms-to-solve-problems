#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
 
using namespace std;
 
int main() {
    char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string str;
    while (getline(cin,str)) {
        for (int i = 0; i < str.length(); i++) {
            if (isspace(str[i])) {
                cout << str[i];
                continue;
            }
            int j;
            for (j = 1; j < strlen(s); j++)
                if (s[j] == str[i])
                    break;
            cout << s[j - 1];
        }
        cout << endl;
    }
    return 0;
}
