#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    if(n%2 == 1) cout << arr[n/2] << endl;
    else cout << arr[n/2 - 1] << endl;
}
