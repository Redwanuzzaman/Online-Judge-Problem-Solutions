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
    int t, n, k, d;
    sft;
    while(t--)
    {
        cin >> n >> k >> d;
        int arr[n+1], mn = 1e9;
        for(int i = 0; i < n; i++)
        {
            sfarr;
        }
        for(int i = 0; i < max(n-d+1, d); i++)
        {
            set <int> st;
            int f = 0;
            for(int j = i; j < (i+d); j++)
            {
                if(i+d > n)
                {
                    f = 1;
                    break;
                }
                st.insert(arr[j]);
                //cout << "sz = " << st.size() << endl;
            }
            int sz = st.size();
            if(f == 0)
                mn = min(mn, sz);
            //st.clear();
        }
        cout << mn << endl;
    }
}
