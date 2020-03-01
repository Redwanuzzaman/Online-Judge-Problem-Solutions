#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    map <string, int> mag, rep;
    map <string, int> :: iterator it;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        mag[s]++;
    }
    for(int i = 0; i < m; i++)
    {
        cin >> s;
        rep[s]++;
    }
    for(it = rep.begin(); it != rep.end(); it++)
    {
        string t = it->first;
        int v = it->second;
        if(mag[t] < rep[t])
        {
            return cout << "No\n", 0;
        }
    }
    cout << "Yes\n";
}
