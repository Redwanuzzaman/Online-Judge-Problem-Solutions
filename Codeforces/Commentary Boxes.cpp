#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m , a , b, build, res;
    cin >> n >> m >> a >> b;
    build = m - (n%m);
    res = min(b * (n%m), a * build);
    cout << res << endl;
}
