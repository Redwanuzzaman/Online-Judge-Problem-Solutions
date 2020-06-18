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
        string s;
        cin >> s;
        int pairs = 0;
        for(int i = 1; i < s.size(); )
        {
            if(s[i] != s[i-1])
            {
                pairs++;
                i += 2;
            }
            else
            {
                i++;
            }
        }
        cout << pairs << endl;
    }
}

