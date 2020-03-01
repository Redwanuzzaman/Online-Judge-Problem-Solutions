#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x, y, ans = 0, imp = 0;
    vector <int> v;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if(y == 0) 
        {
            ans += x;
        }
        else 
        {
            v.push_back(x);
            imp++;
        }
    }
    sort(v.begin(), v.end());
    int tmp = imp - m;
    if(tmp < 0) tmp = 0;

    for(int i = 0; i < tmp; i++)
    {
        ans -= v[i];
    }
    for(int i = imp-1; i >= tmp; i--)
    {
        ans += v[i];
    }
    cout << ans << endl;
}
