#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s, r;
        cin >> s >> r;
        sort(s.begin(), s.end());
        sort(r.begin(), r.end());
        if(s == r) cout << "YES\n";
        else cout << "NO\n";
    }
}
