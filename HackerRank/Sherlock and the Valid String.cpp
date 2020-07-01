#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, cnt = 0, mx = 0;
    string s;
    map <char, int> mp;
    map <char, int> :: iterator it;
    set <int> st;
    set <int> :: iterator it2;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for(it = mp.begin(); it != mp.end(); it++)
    {
        if(it == mp.begin())
        {
            a = it->second;
        }
        if(it->second != a)
        {
            cnt++;
            mx = max(mx, it->second);
        }
        st.insert(it->second);
        //cout << it->first << " = " << it->second << endl;
    }
    if(st.size() > 2)
    {
        cout << "NO\n";
    }
    else if(cnt == 0)
    {
        cout << "YES\n";
    }
    else if(cnt <= 1)
    {
        int t1 = 0, t2 = 0;

        vector <int> v;
        for(it2 = st.begin(); it2 != st.end(); it2++)
        {
            v.push_back(*it2);
        }
        t1 = v[0];
        t2 = v[1];

        if(t1 == 1)
        {
            cout << "YES\n";
        }
        else if((abs(t2 - t1) > 1))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    else
    {
        cout << "NO\n";
    }
}
