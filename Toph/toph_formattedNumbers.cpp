#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s, res = "";
    cin >> s;
    int c = 0;
    for(int i = s.size()-1; i >= 0; i--)
    {
        c++;
        res += s[i];
        if(c % 3 == 0 && i != 0) res += ',';
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
}
