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
    int t, n, m, x, pos;
    sft;
    while(t--)
    {
        sfnm;
        int arr[n+3];
        for(int i = 1; i <= n; i++)
        {
            sfarr;
        }
        set <int> st;
        st.insert(0);
        for(int i = 0; i < m; i++)
        {
            cin >> x;
            st.insert(x);
        }
        int f = 0;
        for(int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for(int j = 1; j <= n; j++)
            {
                if(arr[i] > arr[j])
                {
                    cnt++;
                }
            }
            pos = cnt + 1;
            for(int k = i; k < pos; k++)
            {
                if(st.count(k))
                {
                    continue;
                }
                else
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
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
