#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, tmp;
    string s, res = "", x;
    cin >> k >> s;
    map <char, int> mp;
    map <char, int> :: iterator it;
    for(int i = 0; i < s.size(); i++) mp[s[i]]++;

    for(it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second % k != 0) return cout << -1 << endl, 0;
        else
        {
            tmp = (it->second) / k;
            res = res + string(tmp, (it->first));
        }
    }
    for(int i = 0; i < k; i++) cout << res;
}
