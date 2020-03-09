#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double m, a, b, kilo, mn = 101.0;
    cin >> n >> m;
    while(n--)
    {
        cin >> a >> b;
        kilo = a/b;
        mn = min(mn, kilo);
    }
    cout << fixed << setprecision(8) << mn*m << endl;
}
