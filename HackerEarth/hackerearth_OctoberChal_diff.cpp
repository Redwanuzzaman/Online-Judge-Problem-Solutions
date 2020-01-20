#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%lld",&t)
#define sfn scanf("%lld",&n)
typedef long long ll;

ll precal[11] = {0, 0, };

ll sum(ll n)
{
    return ((n * (n+1))/2);
}

ll fact(ll n)
{
    ll mul = 1;
    for(ll i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}

int main()
{
    ll t, n, perm, summ;
    sft;
    while(t--)
    {
        sfn;
        perm = fact(n);
        summ = sum(n);
        ll ans = 0;
        for(ll i = 1; i <= perm; i++)
        {
            ll tmp = (n * perm) - summ;
            ans += tmp;
        }
        cout << ans << endl;
    }
}
