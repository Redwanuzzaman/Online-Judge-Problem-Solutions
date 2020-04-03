#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfnll scanf("%lld",&n)
#define sfarrll scanf("%lld",&arr[i])
#define MOD 1000000007
typedef long long ll;

int main()
{
    int t;
    sft;
    while(t--)
    {
        ll n;
        sfnll;
        ll arr[n], sum = 0ll;
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n, greater<int>());
        for(ll i = 1; i < n; i++)
        {
            if((arr[i] - i) < 0ll) arr[i] = 0ll;
            else arr[i] -= i;
        }
        for(ll i = 0; i < n; i++)
        {
            sum += arr[i];
            sum %= MOD;
        }
        cout << sum << endl;
    }
}
