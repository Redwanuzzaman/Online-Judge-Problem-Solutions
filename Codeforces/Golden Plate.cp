#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, h, k, res = 0;
    cin >> w >> h >> k;
    for(int i = 1; i <= k; i++)
    {
        res += (h * 2) + (2 * (w-2));
        h -= 4;
        w -= 4;
    }
    cout << res << endl;
}
