#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, sum = 0, total = 0, otc = 0, ans = 0, ot, tt;
    cin >> n;
    int arr[n+1];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    if(total % 3 != 0)
        return cout << 0 << endl, 0;
    ot = total / 3;
    tt = ot * 2;
    for(int i = 0; i < n-1; i++)
    {
        sum += arr[i];
        if(sum == tt)
        {
            ans += otc;
        }
        if(sum == ot)
        {
            otc++;
        }
    }
    cout << ans << endl;
}
