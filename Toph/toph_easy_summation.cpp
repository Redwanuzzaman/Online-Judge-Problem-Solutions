#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sft scanf("%lld",&t)
#define sfn scanf("%lld",&n)

int main()
{
    ll t, n, res, cs = 1;
    sft;
    while(t--)
    {
        sfn;
        res = (n * (2 + ((n-1) * 2))) / 2;
        printf("Case %lld: %lld\n", cs++, res);
    }
}
