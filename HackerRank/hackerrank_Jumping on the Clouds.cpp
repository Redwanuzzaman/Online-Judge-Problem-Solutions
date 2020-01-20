#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; )
    {
        if(i+1 == n-1)
        {
            ans++;
            break;
        }
        else if(arr[i+2] == 0)
        {
            i = i+2;
            ans++;
        }
        else
        {
            i = i+1;
            ans++;
        }
    }
    cout << ans << endl;
}
