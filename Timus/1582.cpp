#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, res;
    cin >> a >> b >> c;
    res = (1000.0 * a * b *c) / ((a*b) + (b*c) + (c*a));
    res = round(res);
    cout << res << endl;
}
