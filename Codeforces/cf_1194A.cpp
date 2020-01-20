#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, x, res;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        res = 2 + ((x-1) * 2);
        cout << res << endl;
    }
}
