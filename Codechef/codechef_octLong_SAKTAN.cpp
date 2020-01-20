#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfq scanf("%d",&q)
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
typedef long long ll;
int arr[304][304];
int main()
{
    int t, n, m, q, x, y;
    sft;
    while(t--)
    {
        sfnm;
        sfq;
        //ll c = 0;
        memset(arr, 0, sizeof arr);
        while(q--)
        {
            sfxy;
            ll c = 0;
            for(int i = 1; i <= m; i++)
            {
                arr[x][i]++;
            }
            for(int i = 1; i <= n; i++)
            {
                arr[i][y]++;
            }
            for(int i = 1; i <= n; i++)
            {
                for(int j = 1; j <= m; j++)
                {
                    cout << arr[i][j] << " ";
                    if(arr[i][j] & 1)
                    {
                        c++;
                    }
                }
                cout << endl;
            }
            cout << "Ans: " << c << endl;
        }
//        for(int i = 1; i <= n; i++)
//        {
//            for(int j = 1; j <= m; j++)
//            {
////                if(arr[i][j] & 1)
////                {
////                    c++;
////                }
//                cout << arr[i][j] << " ";
//            }
//          cout << endl;
//        }
        //cout << c << endl;
    }
}
