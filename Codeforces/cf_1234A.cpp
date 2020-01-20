#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, q, x;
    cin >> q;
    while(q--)
    {
        cin >> n;
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        ll res = ceil(sum/(n*1.0));
        cout << res << endl;
    }
}
