#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sft scanf("%lld",&t)
#define sfn scanf("%lld",&n)
#define sfl2 scanf("%lld%lld",&n,&m)
#define sfarr scanf("%lld",&arr[i])
#define pi acos(-1)

int main()
{
    ll n, m, x, y;
    while(cin >> n >> m)
    {
        x = n;
        while(1)
        {
            if(x < m) break;
            n += (x/m);
            y = x % m;
            x /= m;
            x += y;
        }
        cout << n << endl;
    }
}
