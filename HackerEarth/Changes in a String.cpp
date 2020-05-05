#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)

int main()
{
    //freopen("input.txt", "r", stdin);
    int t, n;
    sft;
    while(t--)
    {
        sfn;
        string s;
        cin >> s;
        int ans = INT_MAX, ac = 0, bc = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'A')
            {
                ac++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            ans = min(ans, ac+bc);
            if(s[i] == 'A') ac--;
            else bc++;
        }
        ans = min(ans, ac+bc);
        cout << ans << endl;
    }
}
