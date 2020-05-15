#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int arr[n], brr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        sort(arr, arr+n);
        sort(brr, brr+n, greater<int>());

        for(int i = 0; i < m; i++)
        {
            if(arr[i] < brr[i])
            {
                sum -= arr[i];
                sum += brr[i];
            }
        }
        cout << sum << endl;
    }
}
