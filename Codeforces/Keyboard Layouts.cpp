#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    char s[1009];
    cin >> s1 >> s2 >> s;
    map <char, char> mp;
    for(int i = 0; i < 26; i++) mp[s1[i]] = s2[i];
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            char c;
            c = toupper(mp[s[i]+32]);
            cout << c;
        }
        else if(s[i] >= '0' && s[i] <= '9') cout << s[i];
        else cout << mp[s[i]];
    }
}
