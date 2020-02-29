#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, x, y;
    cin >> n >> x >> y;
    max(n-x, n-y) < max(x-1, y-1) ? cout << "Black" : cout << "White";
}
