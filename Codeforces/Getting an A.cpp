#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, cnt = 0;
    double sum = 0, div;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    div = (sum / (n*1.0));
    if(div >= 4.50) cout << 0 << endl;
    else
    {
        for(int i = 0; i < n; i++)
        {
            sum += (5 - arr[i]);
            div = (sum / (n*1.0));
            if(div >= 4.50)
            {
                cnt++;
                break;
            }
            else cnt++;
        }
        cout << cnt << endl;
    }
}
