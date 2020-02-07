#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        if(a != c) cout << a << " " << c << endl;
        else cout << a << " " << d << endl;
    }
}
