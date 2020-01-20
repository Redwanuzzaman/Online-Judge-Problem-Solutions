#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll goal[n], foul[n], point[n], mx = 0;
        for(ll i = 0; i < n; i++)
        {
            cin >> goal[i];
        }
        for(ll i = 0; i < n; i++)
        {
            cin >> foul[i];
        }
        for(ll i = 0; i < n; i++)
        {
            point[i] = (goal[i] * 20) - (foul[i] * 10);
            if(point[i] < 0) point[i] = 0;
        }
        for(ll i = 0; i < n; i++)
        {
            mx = max(mx, point[i]);
        }
        cout << mx << endl;
    }
}
