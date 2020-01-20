#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, x, y, cs = 1;
    cin >> t;
    while(t--)
    {
        x = 0;
        cin >> a >> b >> c;
        a += b;
        while(1)
        {
            if(a < c) break;
            x += a/c;
            y = a%c;
            a /= c;
            a += y;
        }
        cout << x << endl;
    }
}
