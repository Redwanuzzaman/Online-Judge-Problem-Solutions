#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a1, d1, k1, a2, d2, k2, sum1, sum2, sum, cs = 1;
    cin >> t;
    while(t--)
    {
        cin >> a1 >> d1 >> k1 >> a2 >> d2 >> k2;
        sum1 = (k1 * (2 * a1 + ((k1-1) * d1))) / 2;
        sum2 = (k2 * (2 * a2 + ((k2-1) * d2))) / 2;
        sum = sum1 + sum2;
        printf("Case %d: ", cs++);
        cout << sum << endl;
    }
}
