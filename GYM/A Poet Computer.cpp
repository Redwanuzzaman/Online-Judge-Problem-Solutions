// 2015 Tishreen Collegiate Programming Contest, problem: (F) A Poet Computer

#include<bits/stdc++.h>
using namespace std;

map <string, int> mp;
int len = 0, mx = 0;

void solve()
{
    int n;
    len = 0, mx = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string str, tmp = "";
        cin >> str;
        for(int j = str.size()-1; j >= 0; j--)
        {
            tmp += str[j];
            mp[tmp]++;
            if(tmp.size() >= len && mp[tmp] >= 3)
            {
                len = tmp.size();
                mx = mp[tmp];
            }
        }
    }
}

int main()
{
    int cs, x;
    cin >> cs;
    for(int i = 1; i <= cs; i++)
    {
        mp.clear();
        solve();
        cout << "Case " << i << ":" << endl << len << " " << mx << endl;
    }

    return 0;
}
