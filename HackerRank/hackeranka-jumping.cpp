#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0, x = 0;
    int arr[n+1];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while(x < n-1)
    {
        if(x+1 == n-1)
        {
            ans++;
            cout << "yo1\n";
            break;
        }
        else if(arr[x+1] == 1)
        {
            x = x+2;
            ans++;
            cout << "yo2\n";
        }
        else
        {
            x = x+1;
            ans++;
            cout << "yo3\n";
        }
    }
    cout << ans << endl;
}

