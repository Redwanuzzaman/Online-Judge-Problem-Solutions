#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum = 0, cnt = 0;
    cin >> n >> m;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = n-1; i >= 0; i--)
    {
        sum += arr[i];
        cnt++;
        if(sum >= m) break;
    }
    cout << cnt << endl;
}
