#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y, z, t1, t2, t3;

    cin >> x >> y >> z >> t1 >> t2 >> t3;
    long long d = (abs(x-z)) * t2;
    long long d2 = (abs(x-y)) * t2;
    long long d3 = 3 * t3;
    long long res = d + d2 + d3;
    long long d4 = abs(x-y) * t1;
    if(d4 >= res) cout << "YES" << endl;
    else cout << "NO" << endl;
}
