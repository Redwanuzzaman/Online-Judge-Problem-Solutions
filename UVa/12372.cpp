#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, l, w, h;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> l >> w >> h;
        if(l <= 20 && w <= 20 && h <= 20) cout << "Case " << i << ": good" << endl;
        else cout << "Case " << i << ": bad" << endl;
    }
}
