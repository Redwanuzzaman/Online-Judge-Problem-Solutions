#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s, res = "";
    cin >> n >> s;
    for(int i = 0; i < n; i++)
    {
        if(((n-i) % 2) == 0) res = s[i] + res;
        else res = res + s[i];
    }
    cout << res << endl;
}
