#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t, cs = 1, n, m, i, j, k, l, q, tmp1, tmp2;
    ll res;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        ll arr[n+3], arr2[m+3];
        arr[0] = 0;
        arr2[0] = 0;
        for(ll x = 1; x <= n; x++)
        {
            cin >> arr[x];
            arr[x] += arr[x-1];
        }
        for(ll x = 1; x <= m; x++)
        {
            cin >> arr2[x];
            arr2[x] += arr2[x-1];
        }
        printf("Case %lld:\n", cs++);
        cin >> q;
        while(q--)
        {
            cin >> i >> j >> k >> l;
            tmp1 = arr[j] - arr[i-1];
            tmp2 = arr2[l] - arr2[k-1];
            res = tmp1 * tmp2;
            cout << res << endl;
        }

    }
}
