#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, q;
    cin >> n;
    map <int, int> mp;
    while(n--)
    {
        cin >> x;
        mp[x]++;
    }
    cin >> q;
    while(q--)
    {
        cin >> x;
        if(mp[x] > 1) cout << "Yes\n";
        else cout << "No\n";
    }
}
