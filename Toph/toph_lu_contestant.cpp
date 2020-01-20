#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cs = 1, rat;
    string s;
    cin >> t;
    while(t--)
    {
        string res;
        cin >> n;
        map <string, int> mp;
        map <string, int> :: iterator it;

        while(n--)
        {
            cin >> s >> rat;
            mp[s] = rat;
        }
        int mx = 0;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(it -> second > mx)
            {
                mx = it -> second;
                res = it -> first;
            }
        }
        printf("Case %d: ", cs++);
        if(mx < 1200) cout << res << " is Newbie!.\n";
        else if(mx < 1400) cout << res << " is Pupil!.\n";
        else if(mx < 1600) cout << res << " is Specialist!.\n";
        else if(mx < 1900) cout << res << " is Expert!.\n";
    }
}
