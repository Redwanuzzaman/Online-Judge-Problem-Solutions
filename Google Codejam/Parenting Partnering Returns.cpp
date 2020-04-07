// Fully Solved
// CodeJam 2020, Qualification Round, Problem C, Parenting Partnering Returns

#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define pff p[i].first.first
#define pfs p[i].first.second
#define ps p[i].second
#define rf res[i].first
#define rs res[i].second

int main()
{
    int t, n, cs = 1, x, y;
    sft;
    while(t--)
    {
        sfn;
        string ans = "";
        pair <pair<int, int>, int> p[n];
        for(int i = 0; i < n; i++)
        {
            sfxy;
            pff = x;
            pfs = y;
            ps = i;
        }
        sort(p, p+n);
        int climit = 0, jlimit = 0, f = 0;

        for(int i = 0; i < n; i++)
        {
            if(pff < climit && pff < jlimit)
            {
                f = 1;
                break;
            }
            else if(pff >= climit)
            {
                climit = pfs;
                ans += 'C';
            }
            else if(pff >= jlimit)
            {
                jlimit = pfs;
                ans += 'J';
            }
        }
        pair <int, char> res[n];

        printf("Case #%d: ", cs++);
        if(f == 1)
            cout << "IMPOSSIBLE" << endl;
        else
        {
            for(int i = 0; i < n; i++)
            {
                rf = ps;
                rs = ans[i];
            }
            sort(res, res+n);
            for(int i = 0; i < n; i++)
            {
                cout << rs;
            }
            cout << endl;
        }
    }
}
