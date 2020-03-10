#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, mx = 0, mn = 1000000000;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        mx = max(mx, x);
        mn = min(mn, x);
    }
    cout << abs(mx-(mn-1)-n) << endl;
}
