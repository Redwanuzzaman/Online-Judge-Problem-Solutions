#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%lld",&t)
#define sfx scanf("%lld",&x)
#define sfn scanf("%lld",&n)
typedef long long ll;

ll sum(ll n)
{
    n -= 1;
    if(n < 0) return 0;
    ll ans = (n * (n+1)) / 2;
    return ans;
}
int main()
{
    ll t, n, x;
    sft;
    while(t--)
    {
        sfn;
        ll arr[n+2], zero = 0, two = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &x);
            if(x == 0)
            {
                zero++;
            }
            else if(x == 2)
            {
                two++;
            }
        }
        ans = sum(zero) + sum(two);
        cout << ans << endl;
    }
}
