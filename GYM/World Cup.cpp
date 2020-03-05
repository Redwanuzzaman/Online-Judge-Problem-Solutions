// 2017-2018 ACM-ICPC Asia East Continent League Final (ECL-Final 2017), problem: (M)

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, grp, ef, qf, sf, fn, id, x, tk;
    scanf("%lld",&t);
    for(ll i = 1; i <= t; i++)
    {
        tk = 0;
        scanf("%lld%lld%lld%lld%lld%lld", &grp, &ef, &qf, &sf, &fn, &id);
        while(id--)
        {
            scanf("%lld", &x);
            if(x >= 1 && x <= 48) tk += grp;
            else if(x >= 49 && x <= 56) tk += ef;
            else if(x >= 57 && x <= 60) tk += qf;
            else if(x >= 61 && x <= 62) tk += sf;
            else tk += fn;
        }
        cout << "Case #" << i << ": " << tk * 10000 << endl;
    }
}
