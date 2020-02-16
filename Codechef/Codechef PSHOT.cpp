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
        string s;
        cin >> s;
        int a = 0, b = 0, ans, c = 0, f = 0, ar = n, br = n;
        for(int i = 0; i < n*2; i++)
        {
            c++;
            if(i % 2 == 0)
            {
                if(s[i] == '1')
                    a++;
                ar--;

            }
            else if(i % 2 == 1)
            {
                if(s[i] == '1')
                    b++;
                br--;
            }

            if(a < b)
            {
                if(a + ar >= b)
                {
                    continue;
                }
                else
                {
                    ans = i+1;
                    f = 1;
                    break;
                }
            }
            else if(a > b)
            {
                if(b + br >= a)
                {
                    continue;
                }
                else
                {
                    ans = i+1;
                    f = 1;
                    break;
                }
            }
        }
        if(f == 1)
            cout << ans << endl;
        else
            cout << n*2 << endl;
    }
}
