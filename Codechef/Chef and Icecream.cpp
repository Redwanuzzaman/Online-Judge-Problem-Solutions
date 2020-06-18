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
        map <int, int> coins;
        coins[5] = 0;
        coins[10]= 0;
        sfn;
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            if(x == 5)
            {
                coins[x]++;
            }
            else if(x == 10)
            {
                if(coins[5] > 0)
                {
                    coins[5]--;
                    coins[x]++;
                }
                else
                {
                    flag = false;
                }
            }
            else
            {
                if(coins[10] > 0)
                {
                    coins[10]--;
                    coins[x]++;
                }
                else if(coins[5] > 1)
                {
                    coins[5] -= 2;
                    coins[x]++;
                }
                else
                {
                    flag = false;
                }
            }
        }
        if(flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
