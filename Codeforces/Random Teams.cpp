#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, mx, mn;
    cin >> n >> m;
    mx = ((n-m) * (n-m+1)) / 2;
    mn = (m * (n/m) * (n/m - 1)) / 2;
    mn += (n / m) * (n % m);
    cout << mn << " " << mx << endl;
}
