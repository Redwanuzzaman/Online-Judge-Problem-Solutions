#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, x, y, sum1 = 0, sum2 = 0, cnt = 0;
    cin >> n >> m;
    ll arr[n+1];
    for(ll i = 0; i < n; i++)
    {
        cin >> x >> y;
        sum1 += x;
        sum2 += y;
        arr[i] = x - y;
    }
    sort(arr, arr+n);
    if(sum2 > m) return cout << -1 << endl, 0;
    for(int i = n-1; sum1 > m; i--)
    {
        sum1 -= arr[i];
        cnt++;
    }
    cout << cnt << endl;
}
