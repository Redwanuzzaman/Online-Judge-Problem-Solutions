#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        int f = 0;
        cin >> a >> b;
        set <char> st;
        for(int i = 0; i < a.size(); i++)
        {
            st.insert(a[i]);
        }
        for(int i = 0; i < b.size(); i++)
        {
            if(st.count(b[i]))
            {
                f = 1;
                break;
            }
        }
        if(f == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
