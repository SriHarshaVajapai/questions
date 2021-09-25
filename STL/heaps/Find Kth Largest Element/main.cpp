#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    make_heap(v.begin(), v.end());
    int result;
    while (k--)
    {
        pop_heap(v.begin(), v.end());
        result = v.back();
        v.pop_back();
    }
    cout << result;
    return 0;
}