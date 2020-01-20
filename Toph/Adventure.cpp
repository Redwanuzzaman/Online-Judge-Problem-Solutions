#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, res = "";
    map <string, int> mp;
    int mx = 0;
    while(getline(cin, s))
    {
        istringstream ss(s);
        do
        {
            string word;
            ss >> word;
            mp[word]++;

        } while(ss);
    }
    map <string, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second > mx)
        {
            mx = it->second;
            res += it->first;
            //cout << it->first << endl;
        cout << mx << endl;
        cout << res << endl;
        }

    }
    cout << res << endl;
}
