#include <iostream>
#include <map>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    map<int, map<int, int>> mp;
    int temp;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            mp[i][temp]++;
        }
    }
    map<int, map<int, int>>::iterator itr;
    map<int, int>::iterator ptr;

    bool ansFound = false;
    for (ptr = mp.begin()->second.begin(); ptr != mp.begin()->second.end() && !ansFound; ptr++)
    {
        bool foundInAll = true;
        for (itr = mp.begin(); itr != mp.end(); itr++)
        {
            if (!itr->second.count(ptr->first))
            {
                foundInAll = false;
            }
        }
        if (foundInAll)
        {
            cout << ptr->first;
            ansFound = true;
        }
    }
    if (!ansFound)
        cout << -1 << endl;

        
    // // For accessing outer map
    // map<int, map<int, int> >::iterator itr;

    // // For accessing inner map
    // map<int, int>::iterator ptr;
    // for (itr = mp.begin(); itr != mp.end(); itr++) {

    //     for (ptr = itr->second.begin(); ptr != itr->second.end(); ptr++) {
    //         cout << "First key is " << itr->first
    //              << " And second key is " << ptr->first
    //              << " And value is " << ptr->second << endl;
    //     }
    // }
    return 0;
}