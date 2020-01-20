#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k;
    deque <int> screen;
    deque <int> :: iterator it;
    set <int> st;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(st.count(x))
        {
            continue;
        }
        st.insert(x);

        if(screen.size() < k)
        {
            screen.push_front(x);
        }
        else
        {
            int rmv = screen.back();
            st.erase(rmv);
            screen.pop_back();
            screen.push_front(x);
        }
    }
    cout << screen.size() << endl;
    for(it = screen.begin(); it != screen.end(); it++)
    {
        cout << *it << " ";
    }
}
