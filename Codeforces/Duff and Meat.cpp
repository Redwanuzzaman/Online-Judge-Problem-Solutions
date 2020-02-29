#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, sum = 0, mn = 1e9;
    cin >> n;
    pair <ll , ll> p[n+1];
    for(ll i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    for(ll i = 0; i < n; i++)
    {
        if(p[i].second < mn)
        {
            mn = p[i].second;
            sum += mn * p[i].first;

        }
        else sum += mn * p[i].first;
    }
    cout << sum << endl;
}
