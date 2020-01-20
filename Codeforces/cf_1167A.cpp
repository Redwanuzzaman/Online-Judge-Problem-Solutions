#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, l, p;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> l >> s;
        p = s.find('8');
        if(p != -1 && (l-p) > 10) cout << "YES\n";
        else cout << "NO\n";
    }
}
