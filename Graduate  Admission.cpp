#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;
   
int choice;
struct Node{
    int id;
    int rank;
    int sco1;
    int sco2;
    vector<int> will;
    Node()
    {
        rank = 0;
        will.resize(choice);
    }
    bool operator>(const Node &n) const
    {
        if(sco1+sco2!=n.sco1+n.sco2) return sco1+sco2>n.sco1+n.sco2;
        else return sco1>n.sco1;
    }
};
int main()
{
    //freopen("t.txt", "r", stdin);
 
    int Num, school;
    scanf("%d %d %d", &Num, &school, &choice);
    vector<int> Full(school);
    for(int i=0; i<school;i++) cin>>Full[i];
    vector<Node> Stu;
    Stu.resize(Num);
    vector<int> luqu[100];//学校最多100个
    vector<int> maxrank;
    maxrank.resize(school);
    for(int i=0; i<Num; i++)
    {
        scanf("%d %d",&Stu[i].sco1, &Stu[i].sco2);
        for(int j=0; j<choice; j++) scanf("%d", &Stu[i].will[j]);
        Stu[i].id = i;
    }
    sort(Stu.begin(), Stu.end(), greater<Node>());
    int nowrank = 1, nowsc = Stu[0].sco1+Stu[0].sco2, nowsc1=Stu[0].sco1, tmp = 0;
    for(int i=0; i<Stu.size(); i++)
    {
        if(Stu[i].sco1+Stu[i].sco2==nowsc)
        {
            if(Stu[i].sco1==nowsc1)
            {
                Stu[i].rank = nowrank;
                tmp++;
            }
            else
            {
                nowsc1 = Stu[i].sco1;
                Stu[i].rank = nowrank + tmp;
                nowrank += tmp;
                tmp = 1;
            }
        }
        else//小于
        {
            Stu[i].rank = nowrank + tmp;
            nowsc = Stu[i].sco1+Stu[i].sco2;
            nowsc1 = Stu[i].sco1;
            nowrank += tmp;
            tmp = 1;
        }
    }
   
    for(int i=0; i<Stu.size(); i++)//对每一个学生
    {
        for(int j = 0; j<choice; j++)//想报哪个学校
        {
            if(Full[Stu[i].will[j]]>0)//还有名额
            {
                luqu[Stu[i].will[j]].push_back(Stu[i].id);
                maxrank[Stu[i].will[j]] = Stu[i].rank;
                Full[Stu[i].will[j]]--;
                break;
            }
            else if(maxrank[Stu[i].will[j]] == Stu[i].rank)
            {
                luqu[Stu[i].will[j]].push_back(Stu[i].id);
                break;
            }
        }
    }
    for(int i=0; i<school; i++)
        sort(luqu[i].begin(), luqu[i].end(), less<int>());
    for(int i=0; i<school; i++)
    {
        for(int j=0; j<luqu[i].size(); j++)
        {
            printf("%d", luqu[i][j]);
            if(j!=luqu[i].size()-1) printf(" ");
        }
        cout<<endl;
    }
    return 0;
}
