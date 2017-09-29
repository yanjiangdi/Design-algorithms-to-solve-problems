#include <iostream>
using namespace std;
char mat[3001][3001];
char init[6][6];
int n;
void paint(int x,int y,int n_size,int size) {
    if(n_size == 1) {
        for(int i = 0;i < n;i++)
            for(int j = 0;j < n;j++)
                mat[x+i][y+j] = init[i][j];
        return;
    }else {
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                if(init[i][j]!=' ')
                    paint(x+i*size/n,y+j*size/n,n_size-1,size/n);
            }
        }
    }
}
 
int main(void) {
    while(cin >> n) {
        if(n==0) break;
        getchar();
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                init[i][j] = getchar();
            }
            getchar();
        }
        int n_size;
        cin >> n_size;
        int size = 1;
        for(int i = 1;i <= n_size;i++)
            size*=n;
        
        for(int i = 0;i < size;i++)
            for(int j = 0;j < size;j++)
                mat[i][j] = ' ';
        paint(0,0,n_size,size);
        for(int i = 0;i < size;i++) {
            for(int j = 0;j < size;j++) {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}


