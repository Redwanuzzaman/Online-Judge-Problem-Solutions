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
    sft;
    while(t--)
    {
        sfn;
        int sum = 0, arr[n+2];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sum /= n;
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > sum)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

