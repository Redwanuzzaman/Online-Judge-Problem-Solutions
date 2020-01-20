#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, d, v, u, cs = 1;
    double t1, t2, res;
    cin >> test;
    while(test--)
    {
        cin >> d >> v >> u;
        cout << "Case " << cs++ << ": ";
        if(v >= u) cout << "can't determine" << endl;
        else
        {
            t1 = d/(1.0* u);
            t2 = d/(1.0 * sqrt(u*u-v*v));
            res = t2-t1;
            if(res <= 0) cout << "can't determine" << endl;
            else cout << fixed << setprecision(3) << res << endl;
        }
    }
}
