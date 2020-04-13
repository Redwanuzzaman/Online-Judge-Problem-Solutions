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
    int t, n, m;
    sft;
    while(t--)
    {
        sfn;
        set <int> st;
        map <int, int> mp;
        map <int, int> :: iterator it;
        for(int i = 0; i < n; i++)
        {
            sfm;
            mp[m]++;
            st.insert(m);
        }
        int mx = 0;
        int sz = st.size();
        for(it = mp.begin(); it != mp.end(); it++)
        {
            mx = max(mx, it->second);
        }
        int ans = min(sz, mx);
        if(st.size() == mx) cout << mx-1 << endl;
        else if(st.size() != mx) cout << ans << endl;
    }
}
