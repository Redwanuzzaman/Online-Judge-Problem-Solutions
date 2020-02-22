#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b, k, res, tmp;
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> k;
        tmp = k/2;
        res = ((k-tmp) * a) - (tmp * b);
        cout << res << endl;
    }
}
