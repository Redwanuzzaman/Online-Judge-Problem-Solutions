#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi acos(-1.0)
int main()
{
    ll n, cnt = 0, ev = 0, odd = 0, ce = 0, re = 0, co = 0, ro = 0;
    cin >> n;
    ll arr[n+1];
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i % 2 == 0) odd += arr[i];
        else ev += arr[i];
    }
    for(ll i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            re = ev - ce;
            ro = odd - co - arr[i];
        }
        else
        {
            re = ev - ce - arr[i];
            ro = odd - co;
        }
        if(ce + ro == co + re) cnt++;
        if(i % 2 == 0) co += arr[i];
        else ce += arr[i];
    }
    cout << cnt << endl;
}
