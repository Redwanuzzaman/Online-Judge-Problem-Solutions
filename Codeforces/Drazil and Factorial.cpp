#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s, res = "", modify[] = {"","","2","3","322","5","53","7","7222","7332"};
    cin >> n >> s;
    for(int i = 0; i < n; i++) res = res + modify[s[i]-'0'];
    sort(res.rbegin(), res.rend());
    cout << res << endl;
}
