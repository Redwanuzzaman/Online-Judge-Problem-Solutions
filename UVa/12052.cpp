#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y, z;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> z;
        double res = (z*1.0/(x+y)) * (x + (x-y));
        cout << round(res) << endl;
    }
}
