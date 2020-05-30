#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%lld",&t)
#define sfnm scanf("%lld%lld",&n,&m)
typedef long long ll;

int main()
{
    ll t, n, m, ans = 1;
    sft;
    while(t--)
    {
        ans = 1;
        vector <ll> divs;
        sfnm;
        for(ll i = 1; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                divs.push_back(i);
                if(i != n/i)
                {
                    divs.push_back(n/i);
                }
            }
        }
        for(ll i = 0; i < divs.size(); i++)
        {
            if(divs[i] > m)
            {
                continue;
            }
            ans = max(ans, divs[i]);
        }

        cout << n/ans << endl;
    }
}

