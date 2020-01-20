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
    ll n;
    cout << "PERFECTION OUTPUT" << endl;
    while(cin >> n)
    {
        if(n == 0) break;
        ll sum = 0;
        vector <int> v;
        for(ll i = 1; i <= n/2; i++)
        {
            if(n % i == 0) v.push_back(i);
        }
        for(ll i = 0; i < v.size(); i++) sum += v[i];

        if(sum == n) printf("%5d  PERFECT\n", n);
        else if(sum > n) printf("%5d  ABUNDANT\n", n);
        else printf("%5d  DEFICIENT\n", n);
    }
    cout << "END OF OUTPUT" << endl;
}
