#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
int main()
{
    int t;
    double r;
    sft;
    while(t--)
    {
        double ans = 0.0;
        cin >> r;
        while(r > .000000001)
        {
            ans += r;
            r /= 1.414213562;
        }
        printf("%.1lf\n", ans);
    }
}
