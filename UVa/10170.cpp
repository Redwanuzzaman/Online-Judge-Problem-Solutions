#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m;
    while(cin >> n >> m)
    {
        ll sum = 0;
        for(ll i = n; i <= m; i++)
        {
            sum += i;
            if(sum >= m)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
