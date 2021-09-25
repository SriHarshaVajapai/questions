#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int find_max(int a, int b, int c)
{
    if (a >= b and a >= c)
        return a;
    else if (b >= a and b >= c)
        return b;
    else
        return c;
}

int main()
{
    int a_solve, b_solve, c_solve;
    cin >> a_solve;
    int a_puzz[a_solve];
    for (int i = 0; i < a_solve; i++)
        cin >> a_puzz[i];
    cin >> b_solve;
    int b_puzz[b_solve];
    for (int i = 0; i < b_solve; i++)
        cin >> b_puzz[i];
    cin >> c_solve;
    int c_puzz[c_solve];
    for (int i = 0; i < c_solve; i++)
        cin >> c_puzz[i];
    //declare a map
    map<int, int> m;
    for (int i = 0; i < a_solve; i++)
        m[a_puzz[i]]++;
    for (int i = 0; i < b_solve; i++)
        m[b_puzz[i]]++;
    for (int i = 0; i < c_solve; i++)
        m[c_puzz[i]]++;

    // check the unique puzz solved by all the three
    int a_count = 0, b_count = 0, c_count = 0;
    for (int i = 0; i < a_solve; i++)
    {
        if (m[a_puzz[i]] == 1)
            a_puzz[a_count++] = a_puzz[i];
    }
    for (int i = 0; i < b_solve; i++)
    {
        if (m[b_puzz[i]] == 1)
            b_puzz[b_count++] = b_puzz[i];
    }
    for (int i = 0; i < c_solve; i++)
    {
        if (m[c_puzz[i]] == 1)
            c_puzz[c_count++] = c_puzz[i];
    }
    int max = find_max(a_count, b_count, c_count);
    if (a_count == max)
    {
        cout << 1 << " " << max << " ";
        sort(a_puzz, a_puzz + a_count);
        for (int i = 0; i < a_count; i++)
            cout << a_puzz[i] << " ";
        cout << "\n";
    }
    if (b_count == max)
    {
        cout << 2 << " " << max << " ";
        sort(b_puzz, b_puzz + b_count);
        for (int i = 0; i < b_count; i++)
            cout << b_puzz[i] << " ";
        cout << "\n";
    }
    if (c_count == max)
    {
        cout << 3 << " " << max << " ";
        sort(c_puzz, c_puzz + c_count);
        for (int i = 0; i < c_count; i++)
            cout << c_puzz[i] << " ";
        cout << "\n";
    }
    return 0;
}