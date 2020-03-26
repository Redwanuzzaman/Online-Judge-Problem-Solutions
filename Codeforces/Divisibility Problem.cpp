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

int main()
{
    ll t, n, m;
    sftll;
    while(t--)
    {
        sfnmll;
        ll mod = n%m;
        ll div = n/m;
        if((n+mod) % m == 0) cout << mod << endl;
        else
        {
            ll tmp = m * (div+1);
            ll ans = tmp - n;
            cout << ans << endl;
        }
    }
}
