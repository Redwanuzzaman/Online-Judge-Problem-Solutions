#include <bits/stdc++.h>
using namespace std;
#define Max 1000002
int arr[1000002];
int main()
{
    int t, a, b, c, d, e, f;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d >> e >> f;
        int sum = 0;
        memset(arr, 0, sizeof(arr));
        for(int i = a; i <= b; i++) arr[i] = 1;
        for(int i = c; i <= d; i++) arr[i] = 1;
        for(int i = e; i <= f; i++) arr[i] = 1;
        for(int i = 0; i <= Max; i++) sum += arr[i];
        cout << sum << endl;
    }
}
