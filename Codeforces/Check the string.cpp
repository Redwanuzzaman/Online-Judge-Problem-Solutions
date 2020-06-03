#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    string s;
    cin >> s;
    set < char > st;
    for(int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
        if(s[i] == 'a') a++;
        else if(s[i] == 'b') b++;
        else c++;
    }

    if(is_sorted(s.begin(),s.end()) && (c == a || c == b) && (st.size() == 3)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
