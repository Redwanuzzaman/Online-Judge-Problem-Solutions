#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sft scanf("%d",&t)
#define sfnmll scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
 
int main()
{
    int t;
    ll a, b, c, d;
    sft;
    while(t--)
    {
        sfnmll;
        if(b >= a) cout << b << endl;
        else if(b < a)
        {
            if(d >= c)
            {
                cout << -1 << endl;
            }
            else
            {
                ll rem = a - b;
                ll diff = c - d;
                ll div = ceil(rem/(diff*1.0));
                ll add = c * div;
                ll ans = b + add;

                cout << ans << endl;
            }
        }
    }
}
