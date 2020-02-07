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
    ll n, x, res = 0;
    sfn;
    ll arr[n+1];
    for(ll i = 0; i < n; i++) sfarr;
    sort(arr, arr+n);
    for(ll i = 0; i < n/2; i++)
    {
        x = arr[i] + arr[n-i-1];
        res += (x*x);
    }
    cout << res << endl;
}

