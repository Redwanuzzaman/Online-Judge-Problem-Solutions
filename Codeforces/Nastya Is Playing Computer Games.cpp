#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, res;
    cin >> n >> k;
    if(n == 2) cout << 6 << endl;
    else
    {
        res = min((n-k),(k-1)) + (n * 3);
        cout << res << endl;
    }
}
