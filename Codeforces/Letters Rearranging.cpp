#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> s;
        sort(s.begin(), s.end());
        if(s[0] == s[s.size()-1]) cout << "-1" << endl;
        else cout << s << endl;
    }
}
