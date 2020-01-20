#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;
    set <int> st;
    while(n--)
    {
        cin >> x;
        st.insert(x);
    }
    while(m--)
    {
        cin >> x;
        st.insert(x);
    }
    set <int> :: iterator it;
    int flag = 0;
    for(it = st.begin(); it != st.end(); it++)
    {
        if(flag == 0) cout << *it, flag = 1;
        else cout << " " << *it;
    }
}

