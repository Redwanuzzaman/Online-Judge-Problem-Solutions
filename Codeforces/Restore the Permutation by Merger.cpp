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
    int n, m, t;
    sft;
    while(t--)
    {
        sfn;
        int arr[2 * n + 2];
        set <int> st;
        vector <int> v;
        for (int i = 0; i < 2*n; i++)
        {
            cin >> m;
            if(!st.count(m))
            {
                v.push_back(m);

            }
            st.insert(m);
        }
        for(int i = 0; i < v.size()-1; i++)
        {
            cout << v[i] << " ";
        }
        cout << v[n-1] << endl;
    }
}
