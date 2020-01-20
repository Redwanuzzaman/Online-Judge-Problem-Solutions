#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000
#define sft scanf("%d",&t)
#define sfn scanf("%lld",&n)
typedef long long ll;
ll ans = 0;

bool largestFactor(ll n)
{
    ll cnt = 0, m = n;
    ll root = sqrt(m);
    for(ll i = 2; i <= root; i++)
    {
        if(n % i == 0)
        {
            cnt++;
            ans = max(ans, i);
        }
        while(n % i == 0)
        {
            n /= i;
        }
    }
    if(n > 1)
    {
        cnt++;
        ans = max(ans, n);
    }
    if(cnt > 1) return true;
    return false;
}
int main()
{
    ll n;
    while(sfn && n)
    {
        n = abs(n);
        if(largestFactor(n)) printf("%lld\n", ans);
        else printf("-1\n");
        ans = 0;
    }
}
