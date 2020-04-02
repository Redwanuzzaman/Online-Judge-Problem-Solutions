#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, f;
    cin >> n;
    pair <int,string> p[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> p[i].second;
        p[i].first = p[i].second.size();
    }
    sort(p,p+n);
    for(int i = 0; i < n-1; i++)
    {
        f = p[i+1].second.find(p[i].second);
        if(f == -1) return cout << "NO" << endl, 0;
    }
    cout << "YES" << endl;
    for(int i = 0; i < n; i++) cout << p[i].second << endl;
}
