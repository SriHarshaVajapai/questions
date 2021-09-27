#include <bits/stdc++.h>
using namespace std;

bool compare(int i, int j)
{
    return i > j;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        make_heap(v.begin(), v.end(), compare);
        int alter = 1;
        unsigned long long int num1 = 0, num2 = 0;
        while (v.size())
        {
            pop_heap(v.begin(), v.end(), compare);
            temp = v.back();
            // cout<<"temp="<<temp;
            v.pop_back();
            if (alter)
            {
                num1 = (num1 * 10) + temp;
                // cout<<" num1="<<num1<<"\n";
                alter = 0;
            }
            else
            {
                num2 = (num2 * 10) + temp;
                // cout<<" num2="<<num2<<"\n";
                alter = 1;
            }
        }
        cout << num1 + num2 << "\n";
    }
}