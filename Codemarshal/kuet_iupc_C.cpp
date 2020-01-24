#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair <ll, ll> pll;

const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

ll Set(ll num, ll pos)
{
    return num | (1LL << pos);
}

ll Clear(ll num, ll pos)
{
    return num & ~(1LL << pos);
}

ll Toggle(ll num, ll pos)
{
    return num ^ (1LL << pos);
}

bool Check(ll num, ll pos)
{
    return (bool)(num & (1LL << pos));
}

ll BigMod(ll a, ll b, ll m)
{
    if(!b)
    {
        return 1 % m;
    }
    ll x = BigMod(a, b / 2, m);
    x = (x * x) % m;
    if(b & 1)
    {
        x = (x * a) % m;
    }
    return x;
}

int cum[32][Max];
int ar[Max];

int main()
{

    int n, q, l, r;
    scanf("%d %d", &n, &q);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
        for(int j = 0; j < 32; j++)
        {
            cum[j][i] = cum[j][i - 1] + Check(ar[i], j);
        }
    }
    while(q--)
    {
        scanf("%d %d", &l, &r);
        ll occurence = BigMod(2, r - l, Mod);
        ll ans = 0;
        for(int j = 0; j < 32; j++)
        {
            if(cum[j][r] - cum[j][l - 1])
            {
                ans += occurence * (1LL << j);
                ans %= Mod;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
