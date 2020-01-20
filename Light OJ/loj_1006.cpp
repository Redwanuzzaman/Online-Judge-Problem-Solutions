#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
# define mod 10000007
ll fn[10005];
ll dp(ll n)
{
    if(fn[n] != -1) return fn[n];
    else
    {
        fn[n] = (dp(n-1) + dp(n-2) + dp(n-3) + dp(n-4) + dp(n-5) + dp(n-6)) % mod;
        return fn[n];
    }
}
int main()
{
    ll t, n, i = 1;
    scanf("%lld", & t);
    while(t--)
    {
        memset(fn, -1, sizeof fn);
        scanf("%lld%lld%lld%lld%lld%lld%lld", &fn[0], &fn[1], &fn[2], &fn[3], &fn[4], &fn[5], &n);
        ll ans = dp(n);
        printf("Case %lld: %lld\n", i++, ans % mod);
    }
}
