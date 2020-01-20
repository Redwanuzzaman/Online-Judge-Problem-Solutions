#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum1 = 0, sum2 = 0, f = 0;
    cin >> n;
    int arr[2*n];
    for(int i = 0; i < 2*n; i++) cin >> arr[i];
    sort(arr, arr+(2*n));
    for(int i = 0; i < 2*n; i++)
    {
        if(i >= n) sum2 += arr[i];
        else sum1 += arr[i];
    }
    if(sum1 == sum2) cout << -1 << endl;
    else
    {
        for(int i = 0; i < 2*n; i++)
            cout << arr[i] << " ";
    }
}
