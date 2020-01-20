#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)

int main()
{
    int t, n;
    sft;
    while(t--)
    {
        sfn;
        int sum = 0, i;
        for(i = 1; i * i < n; i++)
            if(n % i == 0) sum += i + (n/i);
        if(i * i == n) sum += i;
        sum -= n;
        printf("%d\n", sum);
    }
}
