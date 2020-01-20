#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

int main()
{
    ll n, m, mul = 1;
    scanf("%lld %lld", &n, &m);
    for(int i = 1; i <= m; i++)
    {
        mul *= i;
        mul %= mod;
    }
    cout << mul << endl;
}
