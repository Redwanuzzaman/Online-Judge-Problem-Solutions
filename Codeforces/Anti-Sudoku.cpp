#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfm scanf("%d",&m)
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
    int t;
    sft;
    while(t--)
    {
        string s[10];
        for(int i = 0; i < 9; i++)
        {
            cin >> s[i];
        }
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(s[i][j] == '9')
                {
                    s[i][j] = '2';
                }
                //break;
            }
            for(int j = 0; j < 9; j++)
            {
                if(s[j][i] == '9')
                {
                    s[j][i] = '2';
                }
                //break;
            }
        }
        for(int i = 0; i < 9; i++)
        {
            cout << s[i] << endl;
        }
    }
}
