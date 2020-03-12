#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)

int main()
{
    int t;
    sft;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size(), l = 0, r = 0, fr = 0, mnr = 0, lr = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'L')
            {
                l++;
            }
            else
            {
                r++;
            }
            if((s[i] == 'R') && (!fr))
            {
                fr = i+1;
            }

        }
        if(l == 0)
        {
            cout << 1 << endl;
        }
        else if(r == 0)
        {
            cout << n+1 << endl;
        }
        else
        {
            for(int i = n-1; i >= 0; i--)
            {
                if(s[i] == 'R')
                {
                    lr = n-i;
                    break;
                }
            }
            int c = 1;
            for(int i = fr; i < n; i++)
            {
                if(s[i] == 'L')
                {
                    c++;
                    mnr = max(mnr, c);
                }
                else
                {
                    c = 1;
                }
            }
            int ans = max(fr, max(lr, mnr));
            cout << ans << endl;
        }
    }
}
