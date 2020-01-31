#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, x, dorm, room;
    cin >> n >> m;
    ll arr[n+1];
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i != 0) arr[i] += arr[i-1];
    }
    while(m--)
    {
        cin >> x;
        dorm = lower_bound(arr, arr+n, x) - arr;
        cout << dorm + 1 << " ";
        if(dorm > 0) room = x - arr[dorm-1];
        else room = x;
        cout << room << endl;
    }
}
