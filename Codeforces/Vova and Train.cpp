#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b, c, d, e;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        e = a/b + (c-1)/b - d/b;
        cout << e << endl;
    }
}
