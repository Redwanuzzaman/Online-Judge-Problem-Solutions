#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, mx = 0, ans;
    cin >> n;
    map <int, int> mp;
    map <int, int> :: iterator it;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    for(it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second > mx)
        {
            ans = it->first;
            mx = it->second;
        }
    }
    cout << ans << endl;
}
