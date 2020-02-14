#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n = 0, k;
    cin >> t;
    int arr[t+1];
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+t);
    for(int i = 0; i < t; i += 2)
    {
        n += arr[i+1] - arr[i];
    }
    cout << n << endl;
}
