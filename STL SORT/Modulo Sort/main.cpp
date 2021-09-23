#include <iostream>
#include <algorithm>
using namespace std;

int m;

bool compare(int i, int j)
{
    int im = i % m;
    int jm = j % m;
    if (im != jm)
        return im < jm;
    else
    {
        //i is odd and j is also odd
        if (i % 2 != 0 and j % 2 != 0)
        {
            return i > j;
        }
        //i is odd and j is even
        else if (i % 2 not_eq 0 and j % 2 == 0)
        {
            return true;
        }
        //i is even and j is odd
        else if (i % 2 == 0 and j % 2 not_eq 0)
        {
            return false;
        }
        // both are even
        else
        {
            return i < j;
        }
    }
}

int main()
{
    int n;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, compare);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}