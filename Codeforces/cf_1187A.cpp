#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        int res = a - min(b, c) + 1;
        cout << res << endl;
    }
}
