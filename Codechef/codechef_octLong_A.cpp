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
typedef long long ll;

int main()
{
    int t, n;
    sft;
    while(t--)
    {
        sfn;
        int arr[n+2], mn = 1000000009, c = 0;
        for(int i = 1; i <= n; i++)
        {
            sfarr;
        }
        for(int i = 1; i <= 5; i++)
        {
            if(arr[i] < mn)
            {
                c++;
                mn = arr[i];
            }
        }
        for(int i = 6; i <= n; i++)
        {
            int f = 0;
            for(int j = i-5; j < i; j++)
            {
                if(arr[j] <= arr[i])
                {
                    f = 1;
                    break;
                }
            }
            if(f == 0)
            {
                c++;
            }
        }
        cout << c << endl;
    }
}
