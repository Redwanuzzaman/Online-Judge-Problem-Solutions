#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <char> st;
    int req;
    string s;
    cin >> s >> req;
    for(int i = 0; i < s.size(); i++) st.insert(s[i]);
    if(req > s.size()) cout << "impossible" << endl;
    else if(st.size() >= req) cout << "0" << endl;
    else cout << req - st.size() << endl;
}
