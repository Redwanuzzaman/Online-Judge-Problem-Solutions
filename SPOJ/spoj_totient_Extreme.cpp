#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
typedef long long ll;

int eulerTotient(int n)
{
    int result = n;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                n /= i;
            }
            result -= (result/ i);
        }
    }
    if(n > 1) result -= (result / n);
    return result;
}
vector <int> v;

int main()
{
    int t, n;
    for(int i = 0; i < 10001; i++)
    {
        v.push_back(eulerTotient(i));
    }
    for(int i = 1; i < v.size(); i++)
    {
        v[i] += v[i-1];
    }
    sft;
    while(t--)
    {
        sfn;
        printf("%lld\n", ll(v[n]) * ll(v[n]));
    }
}
