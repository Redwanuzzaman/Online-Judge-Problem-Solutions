#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void bin_srch(ll need[], ll stock[], ll n, ll k)
{
    ll low = 0, mid, high = 2e9, tmp;
    while(low <=
           high)
    {
        tmp = 0;
        mid = (low + high) / 2;
        for(ll i = 0; i < n; i++)
        {
            if(need[i] * mid > stock[i]) tmp += need[i] * mid - stock[i];
            if(tmp > k) break;
        }
        if(tmp <= k) low = mid + 1;
        else high = mid - 1;
    }
    cout << high << endl;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    ll need[n+1], stock[n+1];
    
    for(ll i = 0; i < n; i++) cin >> need[i];
    for(ll i = 0; i < n; i++) cin >> stock[i];
    
    bin_srch(need, stock, n, k);
}
