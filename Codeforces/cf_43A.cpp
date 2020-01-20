#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    map <string, int> mp;
    while(n--)
    {
        cin >> s;
        mp[s]++;
    }
    if(mp.begin()->second > mp.rbegin()->second) cout << mp.begin()->first << endl;
    else cout << mp.rbegin()->first << endl;
}
