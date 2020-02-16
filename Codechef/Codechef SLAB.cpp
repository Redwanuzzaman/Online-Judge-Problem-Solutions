#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfnm scanf("%d%d",&n,&m)
#define sfarr scanf("%d",&arr[i])
#define sftll scanf("%lld",&t)
#define sfnll scanf("%lld",&n)
#define sfnmll scanf("%lld%lld",&n,&m)
#define sfxyll scanf("%lld%lld",&x,&y)
#define sfarrll scanf("%lld",&arr[i])
#define sf2d scanf("%d%d",&arr[i][j])
#define pi acos(-1)
#define MAX 100000000
typedef long long ll;

int main()
{
    int t, n;
    double d, tmp;
    sft;
    while(t--)
    {
        sfn;
        int ans, sum = 0, f = 0;
        if(n <= 250000)
        {
            ans = n;
            f = 1;
        }
        if(n > 250000)
        {
            if(n <= 500000)
            {
                d = n - 250000;
                tmp = d * .05;
                sum += tmp;
            }
            else
            {
                d = 500000 - 250000;
                tmp = d * .05;
                sum += tmp;
            }

        }
        if(n > 500000)
        {
            if(n <= 750000)
            {
                d = n - 500000;
                tmp = d * .10;
                sum += tmp;
            }
            else
            {
                d = 750000 - 500000;
                tmp = d * .10;
                sum += tmp;
            }
        }
        if(n > 750000)
        {
            if(n <= 1000000)
            {
                d = n - 750000;
                tmp = d * .15;
                sum += tmp;
            }
            else
            {
                d = 1000000 - 750000;
                tmp = d * .15;
                sum += tmp;
            }
        }
        if(n > 1000000)
        {
            if(n <= 1250000)
            {
                d = n - 1000000;
                tmp = d * .20;
                sum += tmp;
            }
            else
            {
                d = 1250000 - 1000000;
                tmp = d * .20;
                sum += tmp;
            }
        }
        if(n > 1250000)
        {
            if(n <= 1500000)
            {
                d = n - 1250000;
                tmp = d * .25;
                sum += tmp;
            }
            else
            {
                d = 1500000 - 1250000;
                tmp = d * .25;
                sum += tmp;
            }
        }
        if(n > 1500000)
        {
            d = n - 1500000;
            tmp = d * .30;
            sum += tmp;
        }
        if(f)
            cout << n << endl;
        else
        {
            ans = n - sum;
            cout << ans << endl;
        }
    }
}

