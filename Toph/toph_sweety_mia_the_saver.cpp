#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
const int mx = 10001;
bool prime[mx];

void sieve()
{
    for(int i = 4; i < mx; i += 2) prime[i] = true;
    for(int i = 3; i <= sqrt(mx); i += 2)
    {
        if(!prime[i])
        {
            for(int j = i*i; j < mx; j += i) prime[j] = true;
        }
    }
}
int main()
{
    sieve();
    int t, n, cs = 1;
    sft;
    string str;
    while(t--)
    {
        int Max = 0;
        sfn;
        cin >> str;
        for(int i = 0; i < n; i++)
        {
            int num = 0;
            for(int j = i; j < i+4; j++)
            {
                num *= 10;
                num += str[j] - '0';
                if(!prime[num]) Max = max(Max, num);
            }
        }
        printf("Case %d: ", cs++);
        if(Max) printf("%d\n", Max);
        else printf("This is a junk!\n");
    }
}
