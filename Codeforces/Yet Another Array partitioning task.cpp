#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
#define sfl3 scanf("%lld%lld%lld",&n,&m,&k);

int main()
{
    ll n, m, k, sum = 0;
    sfl3;
    vector <pii> v(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end(), greater<pii>());
    vector <int> idx(m*k);
    for(ll i = 0; i < m*k; i++)
    {
        sum += v[i].first;
        idx[i] = v[i].second;
    }
    sort(idx.begin(),idx.end());
    vector <int> part(k-1);
    for(ll i = 0; i < k-1; i++)
    {
        part[i] = idx[(i+1)*m - 1];
    }
    cout << sum << endl;
    for(ll i = 0; i < part.size(); i++)
        cout << part[i]+1 << " ";
}
