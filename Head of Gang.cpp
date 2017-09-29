#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
struct relation{
    string start;
    string end;
    int val;
};
bool cmp(relation temp1, relation temp2)
{
    return temp1.start < temp2.start;
}
int main()
{
    int N, K;
    while (cin >> N >> K)
    {
        vector<relation> infor;
        map<string, int> weight;
        for (int j = 0; j < N; j++)
        {
            string temp1, temp2;
            int temp_val;
            bool flag = false;
            cin >> temp1 >> temp2 >> temp_val;
            weight[temp1] += temp_val;  //����ÿ���˵�weight
            weight[temp2] += temp_val;
         
            //����infor����
            for (int i = 0; i < infor.size(); i++)
            {
                if (infor[i].start == temp1 && infor[i].end == temp2)
                {
                    infor[i].val += temp_val;
                    flag = true;
                }
                if (infor[i].start == temp2 && infor[i].end == temp1)
                {
                    infor[i].val += temp_val;
                }
            }
            if (flag == false) //�ù�ϵ����infor��
            {
                relation temp;
                temp.start = temp1;
                temp.end = temp2;
                temp.val = temp_val;
                infor.push_back(temp);
 
                swap(temp.start, temp.end);
                infor.push_back(temp);
            }
        }///��Ϣ�������
        sort(infor.begin(), infor.end(), cmp);
/*      cout << "---------------------------------" << endl;
        for (int i = 0; i < infor.size(); i++)
        {
            cout << infor[i].start << " " << infor[i].end << " " << infor[i].val << endl;
        }
        for (map<string, int>::iterator it = weight.begin(); it != weight.end(); it++)
            cout << it->first << " " << it->second << endl;
*/
//////---------------------------------------------------------------------------------------------
        int num_gang=0;
        map<string,int> headofgang;
        while (!infor.empty())
        {
            vector<string> visit;
            queue<string> cur_gang; ///�ôβ��ҵ�����
            cur_gang.push(infor[0].start);
            visit.push_back(infor[0].start);
 
            while (!cur_gang.empty())
            {
                string temp = cur_gang.front();
                cur_gang.pop();
 
                for (int i = 0; i < infor.size(); i++)
                {
                    if (infor[i].start == temp)
                    {
                        int j;
                        for (j = 0; j < visit.size() && visit[j] != infor[i].end; j++);
                        if (j == visit.size())  ///����visit֮�У������cur_gang
                        {
                            cur_gang.push(infor[i].end);
                            visit.push_back(infor[i].end);
                        }
                    }
                }
            }////������������
            string headof_cur = visit[0];
            int total_weight = 0;
            for (int i = 0; i < visit.size(); i++)
            {
                total_weight += weight[visit[i]];
                if (weight[visit[i]]>weight[headof_cur])
                    headof_cur = visit[i];
                int start_pos, end_pos;
                for (start_pos = 0; start_pos < infor.size() && infor[start_pos].start != visit[i]; start_pos++);
                for (end_pos = start_pos; end_pos < infor.size() && infor[end_pos].start == visit[i]; end_pos++);
                infor.erase(infor.begin() + start_pos, infor.begin() + end_pos);
            }
            if (visit.size()>2 && total_weight>2*K)
            {
                num_gang++;
                headofgang[headof_cur]=visit.size();
            }
        }////����
        cout << num_gang << endl;
        for (map<string, int>::iterator it = headofgang.begin(); it != headofgang.end();it++)
            cout << it->first<<" "<<it->second<< endl;
    }
    return 0;
}


