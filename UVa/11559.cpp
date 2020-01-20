#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, b, h, w, p, k, cost, mn = 200000000;
    while(scanf("%d %d %d %d\n", &c, &b, &h, &w) != EOF)
    {
        while(h--)
        {
            cin >> p;
            for(int i = 0; i < w; i++)
            {
                cin >> k;
                if(k >= c)
                {
                    cost = c * p;
                    mn = min(mn, cost);
                }
            }
        }
            if(mn <= b) printf("%d\n",mn);
            else printf("stay home\n");
            mn = 200000000;
    }
    return 0;
}
