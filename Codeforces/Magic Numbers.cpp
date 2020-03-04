#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int f = 0, l = s.size();
    if(s[0] == '4') return cout << "NO" << endl, 0;
    for(int i = 0; i < l; i++)
    {
        if(s[i] != '1' && s[i] != '4')
            return cout << "NO" << endl, 0;
    }
    for(int i = 0; i < l-2; i++)
    {
        if(s[i] == '4' && s[i+1] == '4' && s[i+2] == '4')
            return cout << "NO" << endl, 0;
    }
    for(int i = 1; i < l-1; i++)
    {
        if(s[i] == '4' && s[i+1] == '4' && s[i-1] != '1')
            return cout << "NO" << endl, 0;
    }
    cout << "YES" << endl;
}
