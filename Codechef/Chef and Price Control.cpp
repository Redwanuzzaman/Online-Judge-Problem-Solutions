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
#define pi acos(-1)
#define MAX 100000000
typedef long long ll;

int main()
{
    int t, n, m, x;
    sft;
    while(t--)
    {
        sfnm;
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            sum1 += x;
            if(x > m)
            {
                sum2 += m;
            }
            else
            {
                sum2 += x;
            }
        }
        cout << (sum1 - sum2) << endl;
    }
}
