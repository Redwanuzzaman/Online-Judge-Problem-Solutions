#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void bin_srch(ll x, ll y, ll p, ll q)
{
    ll low = 0, high = 1e9, mid, up, down, res = -1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        up = p * mid;
        down = q * mid;
        if(up >= x && down >= y && (down - up >= y - x))
        {
            res = down - y;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    cout << res << endl;
}

int main()
{
    ll t, x, y, p, q;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> p >> q;
        bin_srch(x, y, p, q);
    }
}
