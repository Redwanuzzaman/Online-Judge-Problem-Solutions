#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cs = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n);
        cout << "Case " << cs++ << ": " << arr[n/2] << endl;
    }
}
