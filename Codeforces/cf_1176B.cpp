#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n, one, two, ans, x, mn;
    cin >> t;
    while(t--)
    {
        cin >> n;
        one = 0, two = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            if(x % 3 == 0) ans++;
            else if(x % 3 == 1) one++;
            else two++;
        }

        mn = min(one, two);
        ans += mn;
        one -= mn;
        two -= mn;
        two /= 3;
        one /= 3;
        ans += one;
        ans += two;

        cout << ans << endl;
    }
}

