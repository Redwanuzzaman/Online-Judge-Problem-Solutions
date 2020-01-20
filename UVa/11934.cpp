#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a, b, c, d, l, res, cnt;
    while(scanf("%lld%lld%lld%lld%lld", &a, &b, &c, &d, &l))
    {
        cnt = 0;
        if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0) break;
        else
        {
            for(ll i = 0; i <= l; i++)
            {
                res = (a*i*i + b*i + c);
                if(res % d == 0) cnt++;
            }
            cout << cnt << endl;
        }
    }
}
