#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n, m, sum = 0;
    cin >> n >> m;
    ll arr[m+1];
    for(ll i = 0; i < m; i++) cin >> arr[i];
    sum = arr[0]-1;
    for(ll i = 0; i < m-1; i++){
        if(arr[i] < arr[i+1]) sum += (arr[i+1] - arr[i]);
        else if(arr[i] > arr[i+1]) sum += n - arr[i] + arr[i+1];
        else sum += 0;
    }
    cout << sum << endl;
}
