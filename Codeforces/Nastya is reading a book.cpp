#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r, k, tmp;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> l >> r;
        arr[i] = r;
    }
    cin >> k;
    for(int i = 0; i < n; i++)
    {
        if(k <= arr[i])
        {
            tmp = i;
            break;
        }
    }
    int res = n - tmp;
    cout << res << endl;
}
