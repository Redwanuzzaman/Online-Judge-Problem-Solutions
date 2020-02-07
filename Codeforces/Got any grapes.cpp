#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;

    if(a < x) cout << "NO" << endl;
    else
    {
        a -= x;
        if(a+b < y) cout << "NO" << endl;
        else
        {
            int f = a+b;
            f -= y;
            if(f+c < z) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}
