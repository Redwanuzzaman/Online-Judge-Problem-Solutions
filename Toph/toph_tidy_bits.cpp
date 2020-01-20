#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, sum = 0, ones = 0, d;
    cin >> n;
    {
        while(n)
        {
            if(n & 1) ones++;
            n /= 2;
        }
        for(ll i = 0; i < ones; i++)
        {
            d = pow(2, i);
            sum += d;
        }
        cout << sum << endl;
    }
}
