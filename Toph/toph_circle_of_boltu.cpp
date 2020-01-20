#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%lld%lld",&x,&y)
typedef long long ll;

int main()
{
    int t, cs = 1, n;
    sft;
    while(t--)
    {
        sfn;
        pair <ll, ll> p[n];
        ll mx = 0, pair1, pair2, res, x, y;
        for(ll i = 0; i < n; i++)
        {
            sfxy;
            p[i].first = x;
            p[i].second = y;
        }
        for(ll i = 0; i < n-1; i++)
        {
            for(ll j = i+1; j < n; j++)
            {
                pair1 = (p[i].first - p[j].first) * (p[i].first - p[j].first);
                pair2 = (p[i].second - p[j].second) * (p[i].second - p[j].second);
                res = pair1 + pair2;
                mx = max(mx, res);
            }
        }
        printf("Case %d: %lld\n", cs++, mx);
    }
}

