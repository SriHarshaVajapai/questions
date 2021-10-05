#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //declare a map
    map<int, int> m;
    //find the frequency of each element
    for (int i = 0; i < n; i++)
    {
        m[arr[i]] = i;
    }
    //now for every element in arr, we check whether k-arr[i] exists in arr
    for (int i = 0; i < n; i++)
    {
        int diff = k - arr[i];
        if (m.find(diff) != m.end())
        {
            cout << i << " " << m[diff] << endl;
            break;
        }
    }
    return 0;
}