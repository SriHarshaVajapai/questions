#include <bits/stdc++.h>
using namespace std;

bool isValid(unordered_map<char, int> &m)
{
    for (auto it : m)
        if (it.second > 0)
            return false;
    return true;
}

int main()
{
    string str, t;
    cin >> str >> t;
    unordered_map<char, int> m;
    for (char it : t)
    {
        if (m.count(it))
            m[it]++;
        else
            m[it] = 1;
    }
    pair<int, int> ans = {0, INT_MAX};
    int s, e, flag = 1;
    for (s = 0, e = 0; str[e] != '\0';)
    {
        //cout<<s<<" "<<e<<endl;
        if (m.count(str[e]) && flag)
        {
            m[str[e]]--;
            flag = 0;
        }
        if (isValid(m))
        {
            if (ans.second - ans.first > e - s)
                ans = make_pair(s, e);
            if (m.count(str[s]))
                m[str[s]]++;
            s++;
        }
        else
        {
            flag = 1;
            e++;
        }
    }
    for (int i = ans.first; i <= ans.second; i++)
        cout << str[i];
    return 0;
}