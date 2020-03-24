
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, day, mon, sum = 0, c = 0, ans = 0, p = 1;
    cin >> n;
    int arr[n+2], ar2[n+2];
    arr[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        ar2[i] = arr[i];
        arr[i] += arr[i-1];
    }
    cin >> day >> mon;
    for(int i = 1; i <= n; i++)
    {
        if(i == mon)
        {
            ar2[i] = arr[i];
        }
        else if(i > mon)
        {
            ar2[i] = arr[i] - arr[p];
            p++;
        }
    }

    for(int i = mon; i <= n; i++)
    {
        if(ar2[i] == day)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
