#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sf3 scanf("%d%d%d",&n,&a,&b)
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
    int t, n, a, b, j;
    sft;
    string s = "abcdefghijklmnopqrstuvwxyz";
    while(t--)
    {
        sf3;
        string ans = "";
        for(int i = 0; i < n; )
        {
            //cout << "y\n";
            for(j = 0; j < b && i < n; j++)
            {
                //cout << "z\n";
                ans += s[j];
                i++;
            }

            if(i >= n) break;
        }
        cout << ans << endl;
    }
}

