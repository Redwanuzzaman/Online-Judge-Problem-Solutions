#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    set <string> st;
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(st.count(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
        st.insert(s);
    }
}
