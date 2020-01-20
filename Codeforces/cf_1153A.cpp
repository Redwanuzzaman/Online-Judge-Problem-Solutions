#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, k, mn = INT_MAX, y;
    cin >> n >> k;
    pair <pair<int, int>, int> p[n];
    for(int i = 0; i < n; i++)
    {
        cin >> p[i].first.first >> p[i].first.second;
        p[i].second = i+1;
    }
    sort(p, p+n);
    for(int i = 0; i < n; i++)
    {
        int t = p[i].first.first;
        int t2 = p[i].first.second;
        while(t < k)
            t += t2;
        p[i].first.second = t;
    }
    for(int i = 0; i < n; i++)
    {
        if(p[i].first.second >= k)
        {
            int tmp = p[i].first.second;
            if(tmp < mn)
            {
                y = p[i].second;
                mn = tmp;
            }
        }
    }
    cout << y << endl;
}
