
#include <iostream>
#include <queue>
using namespace std;
 
struct cmp {
    bool operator() (const int & a, const int & b) {
        return a > b;
    }
};
 
int main() {
    //freopen("t.txt", "r", stdin);
 
    int n;
    while(cin>>n) {
        priority_queue<int, vector<int>, cmp> pq;
        for(int i = 0; i<n; i++) {
            int t;
            cin>>t;
            pq.push(t);
        }
        int res = 0;
        while(pq.size() > 1) {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            int c = a + b;
            res += c;
            pq.push(c);
        }
        cout<<res<<endl; 
    }
    return 0;
}
