#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime(ll x)
{
    for(ll i = 2; i*i <= x; i++)
        if( x%i == 0 )
            return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t-- )
    {
        ll a, b;
        cin >> a >> b;
        ll x = a-b, y = a+b;
        if(x == 1 && prime(y)) cout<< "YES" <<endl;
        else cout << "NO" <<endl;
    }
}
