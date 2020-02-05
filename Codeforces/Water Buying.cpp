#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi acos(-1.0)
int main()
{
    ll t, a, b, c;
    cin >> t;
    while(t--)
    {
         cin >> a >> b >> c;
         ll d = (a/2);
         ll g = (a%2);
         ll e = a * b;
         ll f = (d * c) +  (b * g);
         cout << (min(e, f)) << endl;
    }
}
