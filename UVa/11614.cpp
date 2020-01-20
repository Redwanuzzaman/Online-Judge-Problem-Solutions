#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sft scanf("%lld",&t)
#define sfn scanf("%lld",&n)
#define sfl2 scanf("%lld%lld",&n,&m)
#define sfarr scanf("%lld",&arr[i])
#define pi acos(-1)

int main()
{
    ll t, n, res, cs = 1;
    sft;
    while(t--)
    {
        sfn;
        res = (sqrt(1 + 8*n) -1) / 2;
        cout << res << endl;
    }
}
