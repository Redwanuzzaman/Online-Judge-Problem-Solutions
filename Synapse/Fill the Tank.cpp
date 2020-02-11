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
    int t, x, y, z;
    sft;

    while(t--)
    {
        cin >> x >> y >> z;
        int gc1 = __gcd(x, y);
        int lc1 = (x * y) / gc1;
        int gc2 = __gcd(lc1, z);
        int lc2 = (lc1 * z) / gc2;
        int gc3 = __gcd(lc1, lc2);
        int lcm = (lc1 * lc2) / gc3;

        int xx = lcm / x;
        int yy = lcm / y;
        int zz = lcm / z;
        int sum = xx + yy + zz;
        int ans = lcm / sum;
        cout << ans << endl;
    }
}
