#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int res = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> x >> y;
            res ^= i;
        }
        cout << res << endl;
    }
}
