#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c = 0;
    cin >> n >> m;
    char s[26][26];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> s[i][j];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if((s[i][j] == '.') && (s[i][j+1] != '*') && (s[i][j-1] != '*') && (s[i-1][j] != '*') && (s[i+1][j] != '*'))
            {
                c++;
            }
        }
    }
    cout << c << endl;
}
