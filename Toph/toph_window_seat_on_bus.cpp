#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs = 1;
    cin >> t;
    double l, w, d, ar1, ar2, res;
    while(t--)
    {
        cin >> l >> w >> d;
        ar1 = l * w;
        ar2 = l * d;
        res = (ar1 - ar2) / 2.0;
        printf("Case %d: ", cs++);
        cout << fixed << setprecision(2) << res << endl;
    }
}
