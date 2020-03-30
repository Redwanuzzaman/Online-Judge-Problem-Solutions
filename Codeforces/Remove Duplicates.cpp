#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    set <int> st;
    vector <int> v;

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = n-1; i >= 0; i--) if(!st.count(arr[i])) v.push_back(arr[i]), st.insert(arr[i]);

    cout << st.size() << endl;
    for(int i = v.size()-1; i >= 0; i--) cout << v[i] << " ";
}
