#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reverse(string str)
{
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--)
        reversed.push_back(str[i]);
    return reversed;
}

bool compare_strings(string str1, string str2)
{
    str1 = reverse(str1);
    str2 = reverse(str2);
    return str1.compare(str2) < 0 ? 1 : 0;
}

int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    compare_strings(a[0], a[1]);
    sort(a, a + n, compare_strings);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}