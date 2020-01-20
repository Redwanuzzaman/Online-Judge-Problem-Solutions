#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n)
    {
        string str[5];

        map <string, int> mp;
        map <string, int> :: iterator it;

        int res = 0, mx = 0;
        while(n--)
        {
            string joint;
            for(int i = 0; i < 5; i++) cin >> str[i];
            sort(str, str+5);

            for(int i = 0; i < 5; i++) joint += str[i];

            if (!mp.count(joint))
            {
                mp[joint]++;
                mx = max(mx, 1);
            }
            else
            {
                mp[joint]++;
                int tmp = mp[joint];
                mx = max(mx, tmp);
            }
        }
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if (it -> second == mx)
                res += it->second;
        }
        cout << res << endl;
    }
}
