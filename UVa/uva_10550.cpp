#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int st, a, b, c, res, tmp;

    while((cin >> st >> a >> b >> c) && (st || a || b || c))
    {
        res = 1080;
        tmp = st - a;
        if(tmp < 0) tmp += 40;
        res += (tmp * 9);
        tmp = b - a;
        if(tmp < 0) tmp += 40;
        res += (tmp * 9);
        tmp = b - c;
        if(tmp < 0) tmp += 40;
        res += (tmp * 9);
        cout << res << endl;
    }
}
