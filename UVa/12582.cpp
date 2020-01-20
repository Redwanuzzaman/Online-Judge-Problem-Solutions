#include <bits/stdc++.h>
using namespace std;

int vis[27];
int Count[27];
string s;

void visit(int n)
{
    vis[s[n] - 'A'] = 1;
    for(int i = n+1; i < s.size(); i++)
    {
        if(s[i] == s[n]) return;
        if(vis[s[i] - 'A']) continue;
        Count[s[n]-'A']++;
        visit(i);
    }
    return;
}
int main()
{
    int t, cs = 1;
    cin >> t;
    while(t--)
    {
        cin >> s;
        visit(0);
        Count[s[0] - 'A']--;
        cout << "Case " << cs++ << endl;
        for(int i = 0; i < 26; i++)
        {
            if(vis[i])
                cout << char (i+'A') << " = " << Count[i]+1 << endl;
        }
        memset(Count, 0, sizeof Count);
        memset(vis, 0, sizeof vis);
    }
}
