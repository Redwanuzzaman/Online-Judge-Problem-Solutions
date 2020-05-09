#include <bits/stdc++.h>
using namespace std;

#define sftll scanf("%lld",&t)
#define sfnmll scanf("%lld%lld",&n,&m)
typedef long long ll;

int main()
{
    ll t, n, m;
    sftll;
    while(t--)
    {
        sfnmll;
        ll x = n-1;
        ll y = m - 1;
        ll an = m + (y / x);
        cout << an << endl;
    }
}
