#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;
    vector<int> v;
    for (auto i : m)
        v.push_back(i.second);
    make_heap(v.begin(), v.end());
    while (k--)
    {
        pop_heap(v.begin(), v.end());
        int temp = v.back() - 1;
        v.pop_back();
        v.push_back(temp);
        push_heap(v.begin(), v.end());
    }
    long long int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i] * v[i];
    }
    cout << sum;
    return 0;
}