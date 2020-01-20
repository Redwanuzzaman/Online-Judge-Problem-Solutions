#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res, sz;
    vector <int> v;
    while(cin >> n)
    {
        v.push_back(n);
        sz = v.size();
        sort(v.begin(),v.end());
        if(sz % 2 == 1) res = v[sz/2];
        else res = (v[sz/2 - 1] + v[sz/2]) / 2;
        cout << res << endl;
    }
}
