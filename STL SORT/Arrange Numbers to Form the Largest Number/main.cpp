#include <iostream>
#include <algorithm>
using namespace std;

bool compare_strings(string str1, string str2)
{
    string s1 = str1 + str2;
    string s2 = str2 + str1;
    return s1.compare(s2) > 0 ? 1 : 0;
}

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(&arr[0], &arr[n], compare_strings);
    for (int i = 0; i < n; i++)
        cout << arr[i];
    return 0;
}