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
    ll t, n, dig, x;
    while(cin >> n)
    {
        dig = 1;
        x = 1 % n;
        while(x)
        {
            x = ((x * 10) + 1) % n;
            dig++;
        }
        cout << dig << endl;
    }
}
