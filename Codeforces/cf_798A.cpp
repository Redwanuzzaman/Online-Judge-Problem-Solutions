#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, tmp, rev;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        tmp = s;
        for(int j = 97; j < 123; j++)
        {
            if(s[i] == j) continue;
            else
            {
                tmp[i] = j;
                rev = tmp;
                reverse(rev.begin(), rev.end());
                if(tmp == rev) return cout << "YES" << endl, 0;
            }
        }
    }
    cout << "NO" << endl;
}
