#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mn = 1e9, x, y, z;
    cin >> n;
    int arr[n+2];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    for(int i = 1; i <= n; i++)
    {
        int unit = 0;
        for(int j = 1; j <= n; j++)
        {
            x = (abs(i-j)) * 2;
            y = (abs(j-1)) * 2;
            z = (abs(i-1)) * 2;
            unit += (x+y+z) * arr[j];
        }
        mn = min(mn, unit);
    }
    cout << mn << endl;
}
