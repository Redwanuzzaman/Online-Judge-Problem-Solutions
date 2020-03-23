#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    set <char> st;
    for(int i = 0; i < n; i++) st.insert(s[i]);
    if( st.size() == n and n > 1) cout << "No" << endl;
    else cout << "Yes" << endl;
}
