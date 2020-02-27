#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt25 = 0, cnt50 = 0;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    if(arr[0] > 25) return cout << "NO" << endl, 0;
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 25) cnt25++;
            else if(arr[i] == 50)
            {
                cnt25--;
                cnt50++;
            }
            else
            {
                if(cnt50 > 0)
                {
                    cnt50--;
                    cnt25--;
                }
                else cnt25 -= 3;
            }
            if(cnt25 < 0 || cnt50 < 0) return cout << "NO" << endl, 0;
        }
    }
    cout << "YES" << endl;
}
