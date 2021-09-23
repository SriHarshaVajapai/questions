#include <iostream>
using namespace std;

int count = 0;

void merge(int *arr, int start, int mid, int end)
{
    int i = start, j = mid + 1, k = start;
    int r[end + 1];
    while (i <= mid && j <= end)
    {
        if (arr[i] > 2 * arr[j])
        {
            count += (mid + 1 - i);
            j++;
        }
        else
        {
            i++;
        }
    }
    i = start, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
            r[k++] = arr[i++];
        else
            r[k++] = arr[j++];
    }
    while (i <= mid)
        r[k++] = arr[i++];
    while (j <= end)
        r[k++] = arr[j++];
    for (int i = start; i <= end; i++)
    {
        arr[i] = r[i];
    }
}

void merge_sort(int *arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    merge_sort(arr, 0, n - 1);
    // for(int i=0;i<n;i++) cout<<arr[i];
    if (count)
        cout << count;
    else
        cout << -1;
    return 0;
}