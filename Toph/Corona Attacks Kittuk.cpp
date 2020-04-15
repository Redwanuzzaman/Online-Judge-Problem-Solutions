#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans = "";
    cin >> s;
    int f = 0;
    int sz = s.size();
    for(int i = sz-1; i >= 0; i--)
    {
        if(s[i] != '0' && f == 0)
        {
            ans += s[i];
            f = 1;
        }
        else if(f == 1) ans += s[i];
    }
    reverse(ans.begin(), ans.end());
    if(s[sz-1] == '0')
    {
        cout << ans << endl;
        printf("Stay at Home\n");
    }
    else
    {
        cout << s << endl;
        printf("Stay at Home\n");
    }
}
