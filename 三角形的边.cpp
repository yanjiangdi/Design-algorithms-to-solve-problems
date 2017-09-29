#include <algorithm>
#include <iostream>
using namespace std;
 
int main() {
    
    int arr[3], max, mid, min;
    while (cin >> arr[0] >> arr[1] >> arr[2] && arr[0]) {
        sort(arr, arr + 3);
        cout << arr[0] + arr[1] - arr[2] << endl;
    }
    return 0;
}