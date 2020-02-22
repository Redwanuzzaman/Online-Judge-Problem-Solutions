#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, sum = 0, res = 0, k = 0;
    cin >> n >> d;
    int arr[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i] + 10;
    }
    sum -= 10;
    if(sum > d) return cout << -1 << endl, 0;
    else
    {
        for(int i = 0; i < n; i++)
        {
            d -= arr[i];
            if(d >= 10)
            {
                d -= 10;
                res += 2;
            }
            else if(d > 4 && d < 10)
            {
                d -= 5;
                res++;
            }
        }
    }
    res += (d/5);
    cout << res << endl;
}
