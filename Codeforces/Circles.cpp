#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double x, y, z, ans;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf %lf %lf", &x, &y, &z);
        ans = z * z / 2.0;
        cout << fixed << setprecision(6) << ans << endl;
    }
}
