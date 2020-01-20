#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int one = 0, f = 0;
        cin >> s;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                one++;
            }
        }
        if(one & 1) cout << "WIN\n";
        else cout << "LOSE\n";
    }
}
