#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll k2, k3, k5, k6, sum = 0, mn;
    cin >> k2 >> k3 >> k5 >> k6;
    mn = min(k2,min(k5,k6));
    sum += 256 * mn;
    k2 -= mn;
    k5 -= mn;
    k6 -= mn;
    mn = min(k2, k3);
    sum += mn * 32;
    cout << sum << endl;
}
