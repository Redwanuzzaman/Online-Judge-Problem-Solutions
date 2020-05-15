#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    ll n, m;
    cin >> t;
    while(t--)
    {
        cin >> n;
        m = n/2;
        ll ans = 0, inc = 8;
        for(ll i = 1; i <= m; i++)
        {
            ans += (inc * i);
            inc += 8;
        }
        cout << ans << endl;
    }
}
