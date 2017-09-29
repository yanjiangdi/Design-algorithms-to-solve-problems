#include <iostream>
#include <vector>
using namespace std;
void knapsack(int m, int t, vector<int>& price_array, vector<int>& score_array, vector< vector<int> >& result)  
{  
    for (int i = 1; i <= m; ++i)  
    {  
        for (int j = 1; j <= t; ++j)  
        {  
            if (price_array[i] > j)  
            {  
                result[i][j] = result[i - 1][j]; 
            }  
            else  
            {  
                int score1 = result[i - 1][j - price_array[i]] + score_array[i]; 
                int score2 = result[i - 1][j]; 
                if (score1 > score2)  
                {  
                    result[i][j] = score1;  
                }  
                else  
                {  
                    result[i][j] = score2;  
                }  
            }  
        }  
    }  
}  
int main() 
{
	int t,m;
	while(cin>>t>>m)
	{
		vector<int> price_array(1, 0);  
        vector<int> score_array(1, 0);  
		for(int i=0;i<m;i++)
		{
			int price,score;
			cin>>price>>score;
			price_array.push_back(price);
			score_array.push_back(score);
		}
		vector< vector<int> > result(m + 1, vector<int>(t + 1, 0)); // 结果数组  
        knapsack(m, t, price_array, score_array, result); // 调用动态规划算法  
        cout <<result[m][t] << endl;  
	}
	return 0;
}
