#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, bud, cs = 1, x;
    cin >> t;
    while(t--)
    {
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < 6; i++)
        {
            cin >> x;
            sum1 += x;
        }
        cin >> bud;
        bud -= sum1;
        for(int i = 0; i < 6; i++)
        {
            cin >> x;
            sum2 += x;
        }
        sum2 -= bud;
        if(sum2 < 0) sum2 = 0;
        printf("Case %d: %d\n", cs++, sum2);
    }
}
