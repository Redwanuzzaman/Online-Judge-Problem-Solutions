#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i < n; i++)
        if(sum <= arr[i]) sum++;
    cout << sum-1 << endl;
}
