#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, x;
    cin >> test;
    while(test--)
    {
        cin >> n;

        set <int> st;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            st.insert(x);
        }
        cout << st.size() << endl;
    }
}
