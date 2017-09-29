#include <iostream>
#include <vector>
#include <cstdio>
using namespace std; 
int max(int a, int b){
    return a > b ? a : b;
}
 
int min(int a, int b){
    return a < b ? a : b;
}
 
int main(int argc, char *argv[]){
    int n;
    while(std::cin >> n){
        int peer[101];
        for(int i = 1; i <= n; ++i){
            std::cin >> peer[i];
        }
        int dp_f[101], dp_b[101];
        int team_mem = 1;
        for(int i = 1; i <= n; ++i){
            dp_f[i] = 1;
            dp_b[i] = 1;
            for(int j = 1; j < i; ++j)
                if(peer[i] > peer[j])
                    dp_f[i] = max(dp_f[i], dp_f[j] + 1);
            for(int j = n; j > n - i + 1; --j)
                if(peer[n - i + 1] > peer[j])
                    dp_b[i] = max(dp_b[i], dp_b[n - j + 1] + 1);
        }
        for(int i = 1; i <= n; ++i)
            team_mem = max(team_mem, dp_f[i] + dp_b[n - i + 1] - 1);
        cout<< n - team_mem<<endl;
    }
    return 0;
}
