#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<int> v;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        make_heap(v.begin(), v.end());
        int result;
        while (v.size())
        {
            pop_heap(v.begin(), v.end());
            int x = v.back();
            v.pop_back();
            if (v.size())
            {
                pop_heap(v.begin(), v.end());
                int y = v.back();
                v.pop_back();
                result = abs(x - y);
                if (result)
                {
                    v.push_back(result);
                    push_heap(v.begin(), v.end());
                }
            }
            else
            {
                result = x;
            }
        }
        cout << result << "\n";
    }
    return 0;
}