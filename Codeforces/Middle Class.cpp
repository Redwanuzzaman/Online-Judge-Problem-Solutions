#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%lld",&t)
#define sfnm scanf("%lld%lld",&n,&m)
#define sfarr scanf("%lld",&arr[i])
typedef long long ll;

int main()
{
    ll t, n, m;
    sft;
    while(t--)
    {
        sfnm;
        ll arr[n];
        ll ans = 0, tmp = n;
        for(ll i = 0; i < n; i++) sfarr;
        sort(arr, arr+n, greater<ll>());

        for(ll i = 1; i < n; i++)
        {
            arr[i] = arr[i] + arr[i-1];
        }
        for(ll i = n-1; i >= 0; i--)
        {
            if((arr[i] / tmp) >= m)
            {
                ans = i+1;
                break;
            }
            else
            {
                tmp--;
            }
        }
        cout << ans << endl;
    }
}
