#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(arr[j] - arr[i] <= k) cnt = max(cnt, j-i+1);
        }
    }
    cout << n-cnt << endl;
}
