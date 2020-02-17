#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, cnt = 0;
    cin >> n;
    int arr[12];
    for(int i = 0; i < 12; i++) cin >> arr[i];
    sort(arr,arr+12);
    for(int i = 11; i >=0; i--)
    {
        if(sum >= n) return cout << cnt << endl, 0;
        sum += arr[i];
        cnt++;
    }
    if(sum >= n) cout << cnt << endl;
    else cout << -1 << endl;
    return 0;
}

