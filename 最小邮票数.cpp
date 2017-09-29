#include <iostream>
using namespace std;
int main() {
    int sum;
    while (cin >> sum){
        int n;
        cin >> n;
        int stamps[n];
        int mins[sum+1];
        for (int i = 0; i < sum+1; ++i) {
            mins[i] = 20;
        }
        mins[0] = 0;
        for (int i = 0; i < n; ++i) {
            cin >> stamps[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = sum; j >= stamps[i]; --j) {
                if (mins[j - stamps[i]] != 20){
                    mins[j] = (mins[j] < mins[j - stamps[i]] + 1)? mins[j]: mins[j - stamps[i]] + 1;
                }
            }
        }
        if (mins[sum] != 20){
            cout << mins[sum] << endl;
        } else {
            cout << 0 << endl;
        }
 
    }
    return 0;
}
