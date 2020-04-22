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
    int t, n, m;
    sft;
    while(t--)
    {
        sfn;
        m = n / 2;
        if(m & 1) cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int e = 2, sum = 0, o = 0;
            for(int i = 1; i <= m; i++)
            {
                cout << e << " ";
                sum += e;
                e += 2;
            }
            e = 1;
            for(int i = 1; i < m; i++)
            {
                cout << e << " ";
                o += e;
                e += 2;
            }
            cout << (sum - o) << endl;
        }
    }
}

