#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, mn, mx = 0, arr[101] = {0};
    cin >> n >> k;
    set <int> st;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
        st.insert(x);
    }
    for(int i = 0; i < 100; i++)
    {
        if(arr[i] == 0) continue;
        else mx = max(mx, arr[i]);
    }
    int dishes = ceil(mx * 1.0 / k);
    dishes *= k;
    mn = dishes * st.size();
    cout << mn - n << endl;
}
