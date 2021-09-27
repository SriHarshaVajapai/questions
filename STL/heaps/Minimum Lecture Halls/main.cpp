#include <bits/stdc++.h>
using namespace std;

bool compare(int i, int j)
{
    return i > j;
}

int main()
{
    int n;
    vector<pair<int, int>> v;
    cin >> n;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    vector<int> t;
    make_heap(t.begin(), t.end(), compare);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            t.push_back(v[i].second);
            push_heap(t.begin(), t.end(), compare);
            count++;
        }
        else
        {
            pop_heap(t.begin(), t.end(), compare);
            int temp = t.back();
            t.pop_back();
            if (temp > v[i].first)
            {
                t.push_back(temp);
                push_heap(t.begin(), t.end(), compare);
                count++;
            }
            t.push_back(v[i].second);
            push_heap(t.begin(), t.end(), compare);
        }
    }
    cout << count;
    return 0;
}