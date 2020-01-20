#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int ans = log2(double(n & -n)) + 1;
        cout << ans << endl;
    }
}

