#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll d, oc, of, od, cs, cb, cm, cd, online, classic, mnt, km;
    scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &d, &oc, &of, &od, &cs, &cb, &cm, &cd);

    if(d > of)
    {
        online = oc + ((d - of) * od);
    }
    else
    {
        online = oc;
    }
    km = d * cd;
    mnt = d / cs;
    mnt *= cm;
    classic = cb + km + mnt;

    if(online <= classic) cout << "Online Taxi\n";
    else cout << "Classic Taxi\n";
}
