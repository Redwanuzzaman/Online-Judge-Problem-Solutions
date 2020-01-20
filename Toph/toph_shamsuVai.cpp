#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, q, cap, in, out, watr = 0, x;
    cin >> n >> q >> cap;
    bool chk[n+1];
    int rem[n+1];
    for(int i = 1; i <= n; i++)
    {
        cin >> in >> out;
        watr += in;
        if(watr > cap) watr = cap;
        rem[i] = watr;
        if(watr >= out) chk[i] = true;
        else chk[i] = false;
        watr -= out;
        if(watr < 0) watr = 0;
    }
    while(q--)
    {
        cin >> x;
        if(chk[x]) cout << rem[x] << " SHAMSU VAI Zindabad\n";
        else cout << rem[x] << " SHAMSU VAI Angrybird\n";
    }
}
