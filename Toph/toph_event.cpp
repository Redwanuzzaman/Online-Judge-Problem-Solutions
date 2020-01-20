#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, p, k, cs = 1;
    cin >> n;
    while(n--)
    {
        cin >> t >> k >> p;
        int div = (int)ceil((double)k / (p * 1.0));
        int res = t + (p * div);
        int res2 = t + (p * (div+1));
        if(t + k == res) printf("Case %d: %d\n", cs++, res2);
        else printf("Case %d: %d\n", cs++, res);
    }
}
