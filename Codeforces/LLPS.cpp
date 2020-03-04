#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    char a = s[s.size()-1];
    for(int i = s.size()-1; i >= 0; i--)
    {
        if(s[i] == a) cout << a;
        else return 0;
    }
}
