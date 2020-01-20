#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long n, a = 0, ans, sz, div, mod;

    cin >> s >> n;
    sz = s.size();
    for(int i = 0; i < sz; i++)
    {
        if(s[i] == 'a') a++;
    }
    div = n / sz;
    mod = n % sz;
    ans = a * div;
    for(int i = 0; i < mod; i++)
    {
        if(s[i] == 'a') ans++;
    }
    cout << ans << endl;
}
