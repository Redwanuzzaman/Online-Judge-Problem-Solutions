#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n , m;
    while(cin >> n >> m)
    {
        int cnt = 0;
        for(int i = n; i <= m; i++)
        {
            stringstream ss;
            ss << i;
            string s = ss.str();
            set <char> st;
            for(int j = 0; j < s.size(); j++) st.insert(s[j]);
            if(st.size() == s.size()) cnt++;
        }
        cout << cnt << endl;
    }
}
