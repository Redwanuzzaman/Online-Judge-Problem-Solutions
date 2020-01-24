#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cs = 1, t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        map <int, int> mp;
        map <int, int> :: iterator it;
        int mx = 0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for(it = mp.begin(); it != mp.end(); it++)
        {
            mx = max(mx, it->second);
        }
        cout << "Case " << cs++ << ": " << mx << endl;
    }
}
