#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a;
    cin >> n >> k;
    vector <int> v;
    set <int> s;
    for(int i = 1; i <= n; i++){
        cin >> a;
        if(!s.count(a)) s.insert(a), v.push_back(i);
    }
    if(s.size() < k) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        for(int i = 0; i < k; i++) cout << v[i] << " ";
    }
}
