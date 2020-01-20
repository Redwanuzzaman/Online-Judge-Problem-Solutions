#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%d",&t)

int main()
{
    int t, a, b, c, cs = 1;
    sft;
    while(t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        printf("Case %d: ", cs++);
        a *= 100;
        b *= c;
        if((a-b) >= 0) printf("YES\n");
        else printf("NO\n");
    }
}
