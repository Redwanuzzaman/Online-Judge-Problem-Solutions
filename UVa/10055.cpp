#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long hs,es,diff=0;
    while(scanf("%lld %lld",&hs,&es)!=EOF)
    {
        if(hs<es)
        {
            diff=es-hs;
            printf("%lld\n",diff);
        }
        if(hs>=es)
        {
            diff=hs-es;
            printf("%lld\n",diff);
        }
    }
    return 0;
}
