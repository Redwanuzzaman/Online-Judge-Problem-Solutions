#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, mxi = 0, arr[1001] = {0};
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        arr[x]++;
        mxi = max(mxi, arr[x]);
    }
    cout << n - mxi << endl;
}
