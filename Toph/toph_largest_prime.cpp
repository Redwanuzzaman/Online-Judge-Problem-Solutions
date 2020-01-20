#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sf2 scanf("%d%d",&n,&m)
const int mx = 10001;
bool prime[mx];

void sieve()
{
    prime[1] = true;
    for(int i = 4; i < mx; i += 2)
        prime[i] = true;
    for(int i = 3; i <= sqrt(mx); i += 2)
    {
        if(!prime[i])
        {
            for(int j = i*i; j < mx; j += i)
                prime[j] = true;
        }
    }
}

int main()
{
    sieve();
    int t, n, m;
    sft;
    while(t--)
    {
        sf2;
        bool f = false;
        for(int i = m; i >= n; i--)
        {
            if(prime[i] == false)
            {
                printf("%d\n", i);
                f = true;
                break;
            }
        }
        if(f == false)
            printf("-1\n");
    }
}
