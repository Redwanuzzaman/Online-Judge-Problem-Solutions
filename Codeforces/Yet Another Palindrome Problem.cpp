#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfx scanf("%d",&x)
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
        int arr[n+2], f = 0;
        vector <int> v[n+2];
        for(int i = 1; i <= n; i++)
        {
            sfarr;
            int x = arr[i];
            v[x].push_back(i);
        }

        for(int i = 1; i <= n; i++)
        {
            int x = arr[i];
            for(int k = 0; k < v[x].size(); k++)
            {
                int item = v[x][k];
                int diff = item - i;
                if(diff > 1)
                {
                    f = 1;
                    break;
                }
            }
            if(f == 1)
            {
                break;
            }
        }
        if(f == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
