#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0, cnt = 0;
        bool one = false;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
            {
                one = true;
            }
            if(arr[i] == 1 and arr[i-1] == 0)
            {
                ans += cnt;
                cnt = 0;
            }
            else if(arr[i] == 0 and one)
            {
                cnt++;
            }
        }
        cout << ans << endl;
    }
}
