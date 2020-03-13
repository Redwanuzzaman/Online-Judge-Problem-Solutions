#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '8') c++;
    }
    if(c == 0) cout << 0 << endl;
    else
    {
        int res = n/11;
        if(c >= res) cout << res << endl;
        else cout << c << endl;
    }
}
