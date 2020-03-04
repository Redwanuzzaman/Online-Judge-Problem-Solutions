#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, tmp = 0, res = 1e9;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr+n);

    for(int i = 0; i < n; i++)
    {
        while(tmp + 1 < n && arr[tmp+1] <= 2 * arr[i])
        {
            tmp++;
            res = min(res, i + (n-tmp-1));
        }
    }
    cout << res << endl;
}
