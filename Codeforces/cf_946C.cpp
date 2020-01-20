#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int found = 0, ch = 97, pt = 97;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if((s[i] == ch && i == 0) || (s[i] <= ch && i > 0))
        {
            s[i] = pt;
            pt++;
            found++;
            ch++;
        }
        if(found == 26) break;
    }
    if(found == 26) cout << s << endl;
    else cout << -1 << endl;
}
