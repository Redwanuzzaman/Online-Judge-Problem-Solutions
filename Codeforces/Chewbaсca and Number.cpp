#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) if(s[i] > 52) s[i] = 57 - s[i] + 48;
    if(s[0] == '0' || s[0] == '9') s[0] = '9';
    cout << s;
}
