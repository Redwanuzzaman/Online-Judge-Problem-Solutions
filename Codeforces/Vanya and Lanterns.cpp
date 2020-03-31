#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, mxd = 0;
    double res, st, ed;
    cin >> n >> l;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    for(int i = 0; i < n-1; i++){
        int tmp = arr[i+1] - arr[i];
        mxd = max(mxd, tmp);
    }
    st = arr[0] - 0;
    ed = l - arr[n-1];
    double r = mxd/2.0;
    res = max(r, max(st,ed));
    cout << fixed << setprecision(10) << res << endl;
}
