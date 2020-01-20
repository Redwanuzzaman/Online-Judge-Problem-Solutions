#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%d",&t)

int main()
{
    int t, a, b, c, n, res, cs = 1;
    sft;
    while(t--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &n);
        printf("Case %d: ", cs++);
        if((b-a) != (c-b)) printf("Error\n");
        else
        {
            res = a + ((n-1) * (c-b));
            printf("%d\n", res);
        }
    }
}
