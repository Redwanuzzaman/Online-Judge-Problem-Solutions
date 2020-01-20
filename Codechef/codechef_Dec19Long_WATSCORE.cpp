#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfab scanf("%d%d",&a,&b)
typedef long long ll;

int main()
{
    int t, n, a, b;
    sft;
    while(t--)
    {
        ll ans = 0;
        sfn;
        map <int, int> mp;
        map <int, int> :: iterator it;

        for(int i = 0; i < n; i++)
        {
            sfab;
            if(a > 0 && a < 9)
            {
                if(mp.find(a) == mp.end())
                {
                    mp[a] = b;
                }
                else if(mp[a] < b)
                {
                    mp[a] = b;
                }
            }
        }
        for(it = mp.begin(); it != mp.end(); it++)
        {
            ans += it->second;
        }
        cout << ans << endl;
    }
}
