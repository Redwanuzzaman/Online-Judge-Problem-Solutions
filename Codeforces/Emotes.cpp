#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, k, ans = 0;
    scanf("%lld %lld %lld",&n,&m,&k);
    ll arr[n+1];
    for(ll i = 0; i < n; i++) scanf("%lld",&arr[i]);
    sort(arr, arr+n, greater<int>());

    if(m == 1) cout << arr[0] << endl;
    else
    {
        ll tmp = m / (k+1);
        m -= tmp;
        ans = m*arr[0] + tmp * arr[1];
        cout << ans << endl;
    }
}
