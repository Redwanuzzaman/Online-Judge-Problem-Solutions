#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, mx = 0;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        mx = max(mx, arr[i]);
    }
    while(1)
    {
        if(((mx * n) - sum > sum)) return cout << mx << endl, 0;
        else mx++;
    }
}
