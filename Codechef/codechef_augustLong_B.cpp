#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n, m, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(n < m) cout << "YES\n";
        else
        {
            if((m*m) == n) cout << "NO\n";
            else if(m == 1) cout << "NO\n";
            else if(m == n) cout << "YES\n";
            else if(n % m != 0) cout << "YES\n";
            else if(n % m == 0)
            {
                tmp = n / m;
                if(tmp % m == 0) cout << "NO\n";
                else cout << "YES\n";
            }
        }
    }
}
