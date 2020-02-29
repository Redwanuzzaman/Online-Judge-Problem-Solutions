#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << abs(arr[1] - arr[0]) << " " << abs(arr[n-1] - arr[0]) << endl;
    for(int i = 1; i < n; i++)
        cout << min(abs(arr[i]-arr[i+1]), abs(arr[i]-arr[i-1])) << " " << max(abs(arr[n-1]-arr[i]), abs(arr[i]-arr[0])) << endl;
}
