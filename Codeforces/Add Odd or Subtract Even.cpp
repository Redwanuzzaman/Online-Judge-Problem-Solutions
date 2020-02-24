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
    int t, n, m, x;
    sft;
    while(t--)
    {
        sfnm;
        if(n == m) cout << 0 << endl;
        else if(n < m)
        {
            x = m - n;
            if(x & 1) cout << 1 << endl;
            else cout << 2 << endl;
        }
        else
        {
            x = n - m;
            if(x & 1) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
}
