#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        ll arr[n];
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll x;
        while(m--)
        {
            cin >> x;
            ll cnt = 0;
            for(ll i = 0; i < n; i++)
            {
                if(x > arr[i])
                {
                    x = 2 * (x-arr[i]);
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }
}
