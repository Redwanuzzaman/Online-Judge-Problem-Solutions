#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfnm scanf("%d%d",&n,&m)
#define sfarr scanf("%d",&arr[i])

int main()
{
    int t, n, m;
    sft;
    while(t--)
    {
        sfnm;
        int arr[n+1], x, ans = -1;
        for(int i = 0; i < n; i++)
        {
            sfarr;
        }
        set <int> st;
        for(int i = 0; i < m; i++)
        {
            cin >> x;
            st.insert(x);
        }
        for(int i = 0; i < n; i++)
        {
            if(st.count(arr[i]))
            {
                ans = arr[i];
                break;
            }
        }
        if(ans == -1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n1 " << ans << endl;
        }
    }
}
