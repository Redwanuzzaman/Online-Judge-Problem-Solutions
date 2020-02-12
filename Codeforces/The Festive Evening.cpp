#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    map <char, int> mp;
    set <char> st;
    for(int i = 0; i < n; i++) mp[s[i]] = i;

    for(int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        if(st.size() > k) return cout << "YES" << endl, 0;
        if(mp[s[i]] == i) st.erase(s[i]);
    }
    cout << "NO" << endl;
}
