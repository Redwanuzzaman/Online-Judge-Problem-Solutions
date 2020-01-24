#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs = 1;
    cin >> t;
    while(t--)
    {
        double r1, r2, res,a, b, c;
        cin >> a >> b >> c;
        r1 = 2 * a * a * c;
        r2 = (a * a + b * b + c * c);
        res = r1 / r2;
        cout << "Case " << cs++ << ": ";
        cout << fixed << setprecision(10) << res << endl;
    }
}
