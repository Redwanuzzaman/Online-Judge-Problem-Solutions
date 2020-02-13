#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, f = 0;
    cin >> n;
    string s[n+1];
    for(int i = 0; i < n; i++) cin >> s[i];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(s[i][j] == 'O' && s[i][j+1] == 'O')
            {
                s[i][j] = '+';
                s[i][j+1] = '+';
                f = 1;
                break;
            }
        }
        if(f == 1) break;
    }
    if(f == 1)
    {
        cout << "YES" << endl;
        for(int i = 0; i < n; i++) cout << s[i] << endl;
    }
    else cout << "NO" << endl;
}
