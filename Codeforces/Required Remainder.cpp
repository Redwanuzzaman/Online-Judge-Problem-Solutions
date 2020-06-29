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
#define MAX 1000000
typedef long long ll;

int main()
{
    ll t, n, x, y;
    sftll;
    while(t--)
    {
        cin >> x >> y >> n;
        ll rem = n % x;
        if(rem == y)
            cout << n << endl;
        else
        {
            if(rem > y)
            {
                ll diff = rem - y;
                cout << n - diff << endl;
            }
            else
            {
                ll diff = x - (y - rem);
                cout << n - diff << endl;
            }

        }
    }

}
