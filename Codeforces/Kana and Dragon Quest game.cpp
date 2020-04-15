#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfhnm scanf("%d%d%d",&h,&n,&m)

int main()
{
    int t, h, n, m;
    sft;
    while(t--)
    {
        sfhnm;
        bool defeated = false;
        int absorp = h/2 + 10;
        int light = h - 10;
        while(1)
        {
            absorp = h/2 + 10;
            if(n <= 0)
            {
                break;
            }
            if(h <= 0)
            {
                defeated = true;
                break;
            }
            if((h - absorp) > 0 && n > 0)
            {
                h = absorp;
                n--;
            }
            else
            {
                break;
            }
        }
        h = h - (10 * m);
        if(h <= 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
