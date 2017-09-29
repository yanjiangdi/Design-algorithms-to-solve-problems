#include <iostream>
#include <vector>
using namespace std;
void knapsack(int m, int t, vector<int>& time_array, vector<int>& value_array, vector< vector<int> >& result)  
{  
    for (int i = 1; i <= m; ++i)  
    {  
        for (int j = 1; j <= t; ++j)  
        {  
            if (time_array[i] > j) // ��ǰҩƷ�ļ�ֵ j �Ų��µ� i λҩƷʱ  
            {  
                result[i][j] = result[i - 1][j]; // ������ i ��ҩƷ���õ� i - 1 ��ҩƷ 
            }  
            else  
            {  
                int value1 = result[i - 1][j - time_array[i]] + value_array[i]; // ���ߵ� i - 1��ҩƷ 
                int value2 = result[i - 1][j]; // �����ߵ� i - 1 ��ҩƷ 
                if (value1 > value2)  
                {  
                    result[i][j] = value1;  
                }  
                else  
                {  
                    result[i][j] = value2;  
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
		vector<int> time_array(1, 0);  
        vector<int> value_array(1, 0);  
		for(int i=0;i<m;i++)
		{
			int time,value;
			cin>>time>>value;
			time_array.push_back(time);
			value_array.push_back(value);
		}
		vector< vector<int> > result(m + 1, vector<int>(t + 1, 0)); // �������  
        knapsack(m, t, time_array, value_array, result); // ���ö�̬�滮�㷨  
        cout <<result[m][t] << endl;  
	}
	return 0;
}
