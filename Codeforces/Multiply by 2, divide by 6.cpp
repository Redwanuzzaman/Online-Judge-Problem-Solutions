#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfnm scanf("%d%d",&n,&m)
#define sfarr scanf("%d",&arr[i])
#define sftll scanf("%lld",&t)
#define sfnll scanf("%lld",&n)
#define sfnmll scanf("%lld%lld",&n,&m)
#define sfxyll scanf("%lld%lld",&x,&y)
#define sfarrll scanf("%lld",&arr[i])
#define pi acos(-1)
#define MAX 1000000
typedef long long ll;

ll mod_six(ll n)
{
    ll c = 0;
    while(n % 6 == 0)
    {
        n /= 6;
        c++;
    }
    if(n == 1) return c;
    return -1ll;
}

int main()
{
    int t;
    sft;
    ll n;
    while(t--)
    {
        ll c = 0, f = 0, ans = -1;
        sfnll;
        while(1)
        {
            ll tmp = n;
            ans = mod_six(tmp);
            //cout << ans << endl;
            if(c > 32 && ans == -1)
            {
                ans = -1ll;
                break;
            }
            else if(ans == -1)
            {
                n *= 2;
                c++;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if(f == 1) cout << (ans + c) << endl;
        else cout << ans << endl;
    }
}
