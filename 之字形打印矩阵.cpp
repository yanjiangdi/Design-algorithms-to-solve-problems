#include <vector>
using namespace std; 
class Printer {
public:
    vector<int> printMatrix(vector<vector<int> > mat, int n, int m) {
        // write code here
        bool flag=true;
        vector<int> martix;
        for(int i=0;i<n;i++){
            if(flag==true){
                for(int j=0;j<m;j++)
                    martix.push_back(mat[i][j]);
            }
            else{
                for(int j=m-1;j>=0;j--)
                    martix.push_back(mat[i][j]);
            }
            flag=!flag;
        }
        return martix;
    }
};
