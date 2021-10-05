#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isPalindrome(string str)
{
    unordered_map<char, int> m;
    int len = str.length();
    if (len == 1)
        return true;
    for (int i = 0; i < len; i++)
        m[str[i]]++;
    int map_len = m.size();
    if (map_len == 1)
        return true;
    if (len % 2 == 0)
    {
        for (auto itr : m)
        {
            if (itr.second % 2 != 0)
                return false;
        }
    }
    else
    {
        int odd_count = 0;
        for (auto i : m)
        {
            if (i.second % 2 != 0)
            {
                odd_count++;
                if (odd_count > 1)
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        isPalindrome(str) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}