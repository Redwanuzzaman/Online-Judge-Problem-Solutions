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
#define sf2d scanf("%d%d",&arr[i][j])
#define pi acos(-1)
#define MAX 100000000
typedef long long ll;

ll ans[30];

int main()
{
    ll nn = 0;
    ans[0] = 1;
    for(ll i = 1; i <= 33; i++)
    {
        ans[i] = ans[i-1] * 2;
    }
    ll t;
    ll n, m;
    scanf("%lld",&t);
    while(t--)
    {
        sfnll;
        ll res = 0, f = 0, pos = 1;
        if(n > 3) pos = 2;
        for(ll i = 1; i <= 32; i++)
        {
            ll sum = 0;
            for(ll j = 0; j <= 33; j++)
            {
                sum += (i * ans[j]);
                //cout << sum << endl;
                if(sum > n)
                {
                    break;
                }
                else if(sum == n)
                {
                    res = i;
                    f  = 1;
                    break;
                }
            }
            if(f == 1)
            {
                break;
            }
        }
        if(res != 0)
        {
            cout << res << endl;
        }
        else
        {
            int tt = 3, ii = 2;
            while(1)
            {
                if(n % tt == 0)
                {
                    cout << (n/tt) << endl;
                    break;
                }
                else
                {
                    tt += ans[ii];
                    ii++;
                }
            }
        }
    }
}
