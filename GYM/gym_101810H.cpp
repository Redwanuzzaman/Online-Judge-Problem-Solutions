#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[2*n+1];
        for(int i = 1; i <= 2*n; i++)
        {
            cin >> arr[i];
        }
        int mx = 0;
        for(int i = 1; i <= n; i++)
        {
            mx = max(mx, (arr[i] + arr[2*n-i+1]));
        }
        cout << mx << endl;
    }
}
