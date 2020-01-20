#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        bool arr[n+1];
        memset(arr, false, sizeof arr);
        for(int i = 1; i < n; i++)
        {
            cin >> x;
            arr[x] = true;
        }
        for(int i = 1; i <= n; i++)
        {
            if(arr[i] == false)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
