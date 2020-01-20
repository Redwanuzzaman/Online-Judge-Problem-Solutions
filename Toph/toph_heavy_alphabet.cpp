#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        set <char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(st.count(s[i]) || st.count(s[i] - 32) || st.count(s[i] + 32))
                cout << "#";
            else
            {
                st.clear();
                cout << s[i];
                st.insert(s[i]);
            }
        }
        cout << endl;
    }
}
