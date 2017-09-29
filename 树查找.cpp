
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int deepandcount(int x)
{
    int res;
    if (x == 1)
        res = 1;
    else
    {
        int sum = 1;
        for (int i = 1; i < x; i++)
            sum = sum * 2;
        res = sum;
    }
    return res;
}
int main()
{
    int length, num, deep;
    while (cin >> length)
    {
        vector<int> data;
        for (int i = 0; i < length; i++)
        {
            cin >> num;
            data.push_back(num);
        }
        cin >> deep;
        if (deepandcount(deep) > length)
        {
            cout << "EMPTY" << endl;
            continue;
        }
        for (int i = deepandcount(deep) - 1; i < length && i < deepandcount(deep + 1) - 1; i++)
        {
            cout << data[i];
            if (i == deepandcount(deep + 1) - 2 || i == length - 1)
                break;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}