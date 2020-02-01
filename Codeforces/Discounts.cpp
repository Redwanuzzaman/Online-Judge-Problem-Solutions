#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sfq scanf("%lld",&q)
#define sfn scanf("%lld",&n)

int main()
{
    ll n, q, x, r1, r2, r3, sum = 0;
    sfn;
    ll arr[n+1];
    vector <ll> v;
    for(ll i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    sort(v.begin(), v.end(), greater<ll>());
    sfq;
    while(q--)
    {
        cin >> x;
        r1 = sum - v[x-1];
        cout << r1 << endl;
    }
}
