#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n, m, k , l , r, c, p;
    cin >> t;
    while(t--)
    {
        ll mn = INT_MAX;
        cin >> n >> m >> k >> l >> r;
        while(n--)
        {
            cin >> c >> p;
            ll x = m, y = c;
            while(x--)
            {
                if(y > k + 1)
                {
                    y--;
                }
                else if(y < k - 1)
                {
                    y++;
                }
                else if(y <= k+1 && y >= k-1)
                {
                    y = k;
                }
            }
            if(y >= l && y <= r)
            {
                mn = min(mn, p);
            }
        }
        if(mn == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mn << endl;
        }
    }
}
