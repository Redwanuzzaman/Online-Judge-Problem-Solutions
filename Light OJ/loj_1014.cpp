#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, p, l, tmp, cs = 1;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &p, &l);
        tmp = p-l;
        ll root = sqrt(tmp);
        vector <ll> divisors;
        ll f = 0, i;
        printf("Case %lld: ", cs++);
        if(p == 0)
        {
            f = 1;
        }
        else
        {
            for( i = 1; i <= root; i++)
            {
                if(tmp % i == 0)
                {
                    if(i * i != tmp)
                    {
                        if(i > l) divisors.push_back(i);
                        if(tmp/i > l) divisors.push_back(tmp/i);
                    }


                    else
                    {
                        if(i > l)divisors.push_back(i);
                    }
                }
            }
        }
        sort(divisors.begin(), divisors.end());
        if(divisors.size() == 0 || f) cout << "impossible" << endl;
        else
        {
            for(ll i = 0; i < divisors.size()-1; i++)
                cout << divisors[i] << " ";
            cout << divisors[divisors.size()-1] << endl;
        }
    }
}
