#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, res = "";
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(i == 0)
            res += toupper(s[i]);
        else
        {
            if(s[i] == 's') res += '$';
            else if(s[i] == 'i') res += '!';
            else if(s[i] == 'o') res += "()";
            else res += s[i];
        }
    }
    res += '.';
    cout << res << endl;
}
