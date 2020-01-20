#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, m, r, x, mx = 0, mn = INT_MAX;
    cin >> n >> m >> r;
    while(n--)
    {
        cin >> x;
        mn = min(mn, x);
    }
    while(m--)
    {
        cin >> x;
        mx = max(mx, x);
    }
    int d = r/mn;
    int d2 = mx * d;
    int res = max(r, (d2 + r%mn));
    cout << res << endl;
}
