
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, mx = 0, cnt = 1;
    cin >> n;
    ll arr[n+2];
    for(ll i = 0; i < n; i++) cin >> arr[i];

    for(ll i = 1; i < n; i++)
    {
        if(arr[i] > arr[i-1]) cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }
    cout << max(mx, cnt) << endl;
}
