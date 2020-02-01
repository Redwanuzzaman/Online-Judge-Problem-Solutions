#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, mx = 0, ix, ans = 0;
    cin >> n;
    int arr[n*2];
    for(int i = 0; i < n; i++) {cin >> arr[i];
    arr[n+i] = arr[i];}

    for(int i = 0; i < 2*n; i++)
    {
        if(arr[i] == 1)
        {
            cnt++;
        }
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    cout << max(mx, cnt) << endl;
}
