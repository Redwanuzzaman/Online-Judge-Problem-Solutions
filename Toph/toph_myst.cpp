#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, cs = 1;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        printf("Case %d: %d%d\n", cs++, a+b, abs(a-b));
    }
}
