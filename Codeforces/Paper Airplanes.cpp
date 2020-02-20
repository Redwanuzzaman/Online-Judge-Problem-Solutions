#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, s, p, sheets, tot, res;
    cin >> k >> n >> s >> p;
    sheets = ceil((n*1.0) / s);
    tot = sheets * k;
    res = ceil((tot * 1.0) / p);
    cout << res << endl;
}
