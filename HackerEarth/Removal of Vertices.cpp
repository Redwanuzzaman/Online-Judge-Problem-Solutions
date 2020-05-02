#include <bits/stdc++.h>
using namespace std;
#define sfnmll scanf("%lld%lld",&n,&m)
#define sft scanf("%d",&t)
typedef long long ll;

ll josephus(ll n)
{
    ll p = 1;
    while (p <= n)
        p *= 2;
    return (2 * n) - p + 1;
}

int main()
{
    //freopen("josephin.txt", "r", stdin);
    //freopen("josphout.txt", "w", stdout);
    int t;
    ll n, m;
    sft;
    while(t--)
    {
        sfnmll;
        ll start = (2 + (m * 2)) % n;
        if(start == 0)
            start = n;
        ll josval = josephus(n);
        ll ans = (start - 2 + josval) % n;
        cout << ans << endl;
    }
}

