#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

int main()
{
    int sides;
    double r, area, a1, a2, a3;
    while(cin >> r >> sides)
    {
        a1 = (((sides * 1.0) * (r*r))/ 2.0);
        a2 = (2.0 * pi) / (sides*1.0);
        a3 = sin(a2);
        area = a1 * a3;
        cout << fixed << setprecision(3) << area << endl;
    }
}
