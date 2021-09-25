#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    make_heap(v.begin(), v.end());
    long long int total_vacancies = 0;
    for (int i = 0; i < n; i++)
        total_vacancies += v[i];
    if (m > total_vacancies)
        m = total_vacancies;
    long long int cost = 0;
    while (m--)
    {
        pop_heap(v.begin(), v.end());
        temp = v.back();
        cost += temp;
        temp--;
        v.pop_back();
        v.push_back(temp);
        push_heap(v.begin(), v.end());
    }
    cout << cost;
    return 0;
}