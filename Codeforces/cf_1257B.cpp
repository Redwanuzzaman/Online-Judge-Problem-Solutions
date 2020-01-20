#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
     int t;
     ll x, y;
     cin >> t;
     while(t--)
     {
         cin >> x >> y;
         if(x == 1 && y == 1) cout << "YES\n";
         else if(x == 2 && y < 4) cout << "YES\n";
         else if(x == 3 && y < 4) cout << "YES\n";
         else if(x > 3) cout << "YES\n";
         else cout << "NO\n";
     }
}
