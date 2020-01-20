#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d, e, f;
    while(cin >> a >> b >> c)
    {
        d = a * a;
        e = b * b;
        f = c * c;
        if(a == 0 && b == 0 && c == 0) break;
        else if(d+e == f || d+f == e || e+f == d) cout << "right\n";
        else cout << "wrong\n";
    }
}
