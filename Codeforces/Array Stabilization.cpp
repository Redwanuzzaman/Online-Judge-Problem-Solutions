#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, res;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    res = min(arr[n-2] - arr[0], arr[n-1] - arr[1]);
    cout << res << endl;
}
