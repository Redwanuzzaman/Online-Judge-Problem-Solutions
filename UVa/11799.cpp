#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m, mx;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        mx = 0;
        cin >> n;
        while(n--){
            cin >> m;
            mx = max(mx,m);
        }
        cout << "Case " << i << ": " << mx << endl;
    }
}
