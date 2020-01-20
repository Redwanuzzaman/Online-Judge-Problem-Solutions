#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q, x, res;
    cin >> n >> q;
    vector <ll> v, sum;
    for(ll i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(ll i = 1; i < n; i++)
    {
        v[i] = v[i] + v[i-1];
    }
    while(q--)
    {
        cin >> x;
        res = lower_bound(v.begin(), v.end(),x) - v.begin() + 1 ;
        cout << res << endl;
    }

}
