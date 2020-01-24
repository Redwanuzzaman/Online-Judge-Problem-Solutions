#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n, cs = 1, rat, tot;
    cin >> t;
    while(t--)
    {
        cin >> n;
        map <ll, ll> mp;
        ll mx = 0, sum = 0, tmp;
        for(ll i = 0; i < n; i++)
        {
            cin >> tot >> rat;
            mp[rat] += tot;
            sum += tot;
        }
        map <ll, ll> :: iterator it;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            tmp = sum * (it->first);
            mx = max(mx, tmp);
            sum -= it->second;
        }
        cout << "Case " << cs++ << ": " << mx << endl;
    }
}
