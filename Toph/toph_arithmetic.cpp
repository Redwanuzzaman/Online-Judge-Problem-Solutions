#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cs = 1, x, ans;
    cin >> t;
    while(t--)
    {
        int mx = INT_MIN;
        int mn = INT_MAX;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            mx = max(x, mx);
            mn = min(x, mn);
        }
        ans = max(abs(mx), abs(mn));
        printf("Case %d: %d\n", cs++, ans);
    }
}
