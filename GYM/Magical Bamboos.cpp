// 2017 ACM Arabella Collegiate Programming Contest

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n, x, c1, c2;
    scanf("%lld", &t);
    while(t--)
    {
        c1 = 0, c2 = 0;
        ll sum = 0, gcd;
        scanf("%lld", &n);
        for(ll i = 0; i < n; i++)
        {
            scanf("%lld", &x);
            if(x % 2 == 0)
                c1 = 1;
            else
                c2 = 1;
        }
        if(c1 != c2)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
