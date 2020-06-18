#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfnll scanf("%lld",&n)
typedef long long ll;

int main()
{
    int t;
    sft;
    while(t--)
    {
        ll n;
        sfnll;
        if(n & 1)
        {
            cout << (n / 2) << endl;
        }
        else
        {
            while(n % 2 == 0)
            {
                n /= 2;
            }
            cout << (n / 2) << endl;
        }
    }
}

