#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxyz scanf("%lld%lld%lld",&x,&y,&z)
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
    ll t, n, m, x, y, z;
    sftll;
    while(t--)
    {
        sfnmll;
        ll sum = 0;
        pair <ll, ll> p[n+5];
        for(int i = 0; i < n; i++)
        {
            sfxyz;

            p[i].first = z - y + 1;
            p[i].second = x;
            sum += x;
        }
        if(sum < m)
            cout << -1 << endl;
        else
        {
            sort(p, p+n);
            ll cnt = 0, ans;
            for(int i = 0; i < n; i++)
            {
                cnt += p[i].second;
                //cout << p[i].first << " " << p[i].second << endl;
                if(cnt >= m)
                {
                    ans = p[i].first;
                    break;
                }
            }
            cout << ans << endl;
        }

    }
}
