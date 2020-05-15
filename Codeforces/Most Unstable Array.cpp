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
        cin >> n >> m;
        if (n == 1)
            cout << 0 << endl;
        else if( n == 2)
            cout << m << endl;
        else
        {
            ll mdiv = m/2;
            ll ndiv = n/2;
            ll ans = mdiv * 2;
            ans += (m - mdiv) * 2;
            cout << ans << endl;
        }
    }
}
