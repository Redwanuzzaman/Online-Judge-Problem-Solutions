#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, x, cost = 0, mn;
    cin >> n >> a >> b;
    int arr[n+5];
    mn = min(a,b);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
        if((arr[i] == 0 && arr[n-i-1] == 1) || (arr[i] == 1 && arr[n-i-1] == 0)) return cout << -1 << endl, 0;
        else if(arr[i] == 2)
        {
            if(arr[n-i-1] == 0) cost += a;
            else if(arr[n-i-1] == 1) cost += b;
            else cost += mn;
        }
    }
    cout << cost << endl;
}
