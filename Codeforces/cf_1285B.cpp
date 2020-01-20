#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sft scanf("%lld",&t)
#define sfn scanf("%lld",&n)
#define sfarr scanf("%lld",&arr[i])

int main()
{
    ll t, n;
    sft;
    while(t--)
    {
        sfn;
        ll arr[n+2], cum[n+2], idx, mxpos = INT_MIN, mx = INT_MIN, mn = INT_MAX, yasser = 0,f = 0;
        for(ll i = 0; i < n; i++)
        {
            sfarr;
            yasser += arr[i];
            mn = min(mn, arr[i]);
            mx = max(mx, arr[i]);
            cum[i] = yasser;
            if(yasser > mxpos)
            {
                idx = i;
                mxpos = yasser;
            }
        }
        if(yasser <= mn || yasser <= mx)
        {
            cout << "NO\n";
        }
        else
        {
            mx = 0;
            int lim = 0;
            if(idx == n-1) lim = 1;
            for(int i = idx-1; i >= lim; i--)
            {
                if(cum[idx] - cum[i] + arr[i] >= yasser)
                {
                    f = 1;
                    break;
                }
                mx = max(mx, cum[idx] - cum[i]);
            }
            if(f == 1)
                cout << "NO\n";
            else
                cout << "YES\n";
//            cout << "Y = " << yasser << "\nA = " << mx <<"\n";
//            cout << "idx = "<<idx<<endl;
        }
    }
}
