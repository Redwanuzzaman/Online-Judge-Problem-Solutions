#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfx scanf("%d",&x)
#define sfxy scanf("%d%d",&x,&y)
#define sfnm scanf("%d%d",&n,&m)
#define sfarr scanf("%d",&arr[i])

int main()
{
    int t, n, m;
    sft;
    while(t--)
    {
        sfnm;
        int arr[n+2], mn = INT_MAX;
        for(int i = 1; i <= n; i++)
        {
            sfarr;
            mn = min(mn, arr[i]);
            arr[i] = mn;
        }
        while(m--)
        {
            int x;
            sfx;
            printf("%d\n", arr[x]);
        }
    }
}
