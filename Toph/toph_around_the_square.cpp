#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1)
typedef long long ll;

int main()
{
    double sq, r1, r2, r3, r4;
    while(cin >> sq >> r1 >> r2 >> r3 >> r4)
    {
        sq *= sq;
        r1 = pi * r1 * r1;
        r2 = pi * r2 * r2;
        r3 = pi * r3 * r3;
        r4 = pi * r4 * r4;
        r1 /= 4.0;
        r2 /= 4.0;
        r3 /= 4.0;
        r4 /= 4.0;
        sq -= (r1 + r2 + r3 + r4);
        cout << fixed << setprecision(3) << sq << endl;
    }

}

