#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cnt = 0, row = 0, col = 0;
    string s;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        for(int j = 0; j < m; j++)
        {
            if(s[j] == 'B')
            {
                cnt++;
                row += i+1;
                col += j+1;
            }
        }
    }
    row /= cnt;
    col /= cnt;
    cout << row << " " << col << endl;
}
