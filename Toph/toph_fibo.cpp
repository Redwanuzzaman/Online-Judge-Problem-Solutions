#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    ll arr[51];
    cin >> n;
    arr[1] = 1;
    arr[2] = 1;
    for(ll i = 3; i <= 50; i++) arr[i] = arr[i-1] + arr[i-2];
    cout << arr[n] << endl;
}
