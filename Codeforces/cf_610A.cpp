#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    if(n & 1) cout << "0" << endl;
    else
    {
        ll k = ceil(n / 4.0);
        cout << k-1 << endl;
    }
}

