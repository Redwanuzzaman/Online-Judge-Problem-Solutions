#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, len;
    cin >> t;
    while(t--)
    {
        string s, str = "";
        cin >> len >> s;
        map <char, int> mp;
        map <char, int> :: iterator it;
        for(int i = 0; i < len; i++) mp[s[i]]++;
        int pal = 0, d, f = 0, sc;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            sc = it->second;
            if(sc & 1) f++;
            d = sc / 2;
            while(d--) str += it->first;
        }
        if(f > 1) cout << 0 << endl;
        else
        {
            do
            {
                pal++;
            } while(next_permutation(str.begin(), str.end()));
            cout << pal << endl;
        }
    }
}
