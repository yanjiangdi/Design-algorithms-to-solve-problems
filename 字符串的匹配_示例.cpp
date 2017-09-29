#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    vector<string> vs;
    while (cin >> n) {
        vs.clear();
        for (int i=0; i<n; i++) {
            string s;
            cin >> s;
            vs.push_back(s);
        }
        string s;
        cin >> s;
        for (int i=0; i<n; i++) {
            int j1 = 0;
            int j2 = 0;
            string s2(vs[i]);
            while (true) {
                if (j1 < s.size() && j2 == s2.size()
                    || j1 == s.size() && j2 < s2.size()) {
                        break;
                }
                if (j1 == s.size() && j2 == s2.size()) {
                    cout << (i + 1) << ' ' << s2 << endl;
                    break;
                }
                if (s[j1] == '[') {
                    bool flag = false;
                    while (s[++j1] != ']') {
                        if ((s[j1] | 32) == (s2[j2] | 32)) {
                            flag = true;
                        }
                    }
                    if (!flag) {
                        break;
                    }
                    j1++;
                    j2++;
                }
                else {
                    if ((s[j1] | 32) == (s2[j2] | 32)) {
                        j1++;
                        j2++;
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    
return 0;
    }
