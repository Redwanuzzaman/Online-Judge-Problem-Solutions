#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, j = 0, x = 0;
    cin >> n >> k;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);

    for(int i = 0; i < k; i++)
    {
        while(arr[j]-x == 0 && j < n-1)
        {
            j++;
        }
        cout << arr[j]-x << endl;
        x = arr[j];
    }
}
