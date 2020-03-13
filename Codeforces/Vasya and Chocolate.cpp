#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, s, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> s >> a >> b >> c;
        ll res, tk, bar;
        tk = a*c;
        bar = s/tk;
        ll self = s/c;
        res = self + (bar*b);
        cout << res << endl;
    }
}
