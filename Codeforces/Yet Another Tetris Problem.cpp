#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&test)
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
    int test, n, m;
    sft;
    while(test--)
    {
        sfn;
        int x, e = 0, o = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            if(x & 1) o++;
            else e++;

        }
        if(e && o) cout << "NO\n";
        else cout << "YES" << endl;
    }
}
