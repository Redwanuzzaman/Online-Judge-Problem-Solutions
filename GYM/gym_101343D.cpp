#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int d = 0, l = 0, sy = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            {
                l++;
            }
            else if(s[i] >= '0' && s[i] <= '9')
            {
                d++;
            }
            else if(s[i] == '@' || s[i] == '?' || s[i] == '!')
            {
                sy++;
            }
        }
        if(l < 4 && d > 3 && sy > 1) cout << "The last character must be a letter.\n";
        else if(d < 4 && l > 3 && sy > 1) cout << "The last character must be a digit.\n";
        else if(sy < 2 && d > 3 && l > 3) cout << "The last character must be a symbol.\n";
        else cout << "The last character can be any type.\n";
    }
}
