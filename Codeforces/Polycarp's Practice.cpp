#include <bits/stdc++.h>
using namespace std;

int res[2002];
int main()
{
    int n, k, sum = 0, x = 0;
    cin >> n >> k;
    int arr[n+1], tmp[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        tmp[i] = arr[i];
    }
    sort(arr, arr+n, greater<int>());
    for(int i = 0; i < k; i++)
    {
        sum += arr[i];
        res[arr[i]]++;
    }
    cout << sum << endl;
    for(int i = 0; i < n; i++)
    {
        x++;
        if(res[tmp[i]])
        {
            k--;
            res[tmp[i]]--;
            if(k == 0) x += n-i-1;
            cout << x << " ";
            x = 0;
        }
    }
}
