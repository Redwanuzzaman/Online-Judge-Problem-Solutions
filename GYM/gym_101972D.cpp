#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, b, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n >> a >> b;
        x = n/2;
        y = n - x;
        if(a >= y && b >= x) cout << "YES\n";
        else cout << "NO\n";
    }
}
