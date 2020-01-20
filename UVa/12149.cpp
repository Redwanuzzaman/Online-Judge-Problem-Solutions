#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, res;
    while(cin >> n && n)
    {
        res = 0;
        for(ll i = n; i >= 1; i--)
        {
            res += i*i;
        }
        cout << res << endl;
    }
}
