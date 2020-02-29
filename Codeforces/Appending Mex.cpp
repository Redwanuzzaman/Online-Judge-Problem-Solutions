//Rechecking

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, mx = 0;
    cin >> n;
    ll arr[n+2];
    for (ll i = 0; i < n; ++i) cin >> arr[i];

    if (arr[0] != 0) return cout << "1" << endl, 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] <= mx+1) mx = max(arr[i], mx);
        else return cout << i+1 << endl, 0;
    }
    cout << -1 << endl;
}
