#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n, x;
    cin >> n;
    pair <ll, ll> p[n+5];
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        p[i].second = x;
        while(x % 3 == 0)
        {
            x /= 3;
            p[i].first--;
        }
    }
    sort(p, p+n);
    for(int i = 0; i < n; i++)
    {
        if(i == n-1) cout << p[i].second << endl;
        else cout << p[i].second << " ";
    }
}
