#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define sft scanf("%lld",&t)
#define sfn scanf("%lld",&n)
#define sfarr scanf("%lld",&arr[i])
typedef long long ll;

int main()
{
    ll t, n, cs = 1;
    sft;
    while(t--)
    {
        cin >> n;
        ll arr[n], ans = 1;
        for(int i = 0; i < n; i++)
        {
            sfarr;
        }
        sort(arr, arr+n);
        for(int i = 0; i < n; i++)
        {
            ans = (ans * (arr[i] - i)) % mod;
        }
        cout << "Case " << cs++ << ": " << ans << endl;
    }
}
