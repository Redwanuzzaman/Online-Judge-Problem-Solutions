#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, mn = INT_MAX, val;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    for(int i = 0; i < n-1; i++)
    {
        val = abs(arr[i] - arr[i+1]);
        mn = min(mn, val);
    }
    cout << mn << endl;
}
