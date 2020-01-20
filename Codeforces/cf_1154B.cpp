#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    set <int> st;
    set <int> :: iterator it;
    vector <int> v;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    if(st.size() > 3) cout << -1 << endl;
    else
    {
        for(it = st.begin(); it != st.end(); it++)
        {
            v.push_back(*it);
        }
        sort(v.begin(), v.end());
        if(st.size() == 3)
        {
            int x = v[2] - v[1];
            int y = v[1] - v[0];
            if(x == y) cout << y << endl;
            else cout << -1 << endl;
        }
        else if(st.size() == 2)
        {
            int x = v[1] - v[0];
            if(x & 1) cout << x << endl;
            else cout << x/2 << endl;
        }
        else cout << 0 << endl;
    }
}
