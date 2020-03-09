#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, mn;
    cin >> n;
    vector <int> v[3];

    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        v[x-1].push_back(i);
    }
    mn = min(v[0].size(), min(v[1].size(), v[2].size()));
    cout << mn << endl;

    for(int i = 0; i < mn; i++)
        cout << v[0][i] << " " << v[1][i] << " " << v[2][i] << endl;
}
