#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1])
        {
            if(s[i] == s[i+1] && s[i] == s[i + 2])
            {
                if(s[i] != 'a') s[i] = 'a';
                else s[i] = 'z';
            }
            else s[i-1] = s[i+1];
        }
    }
    cout << s << endl;
}

