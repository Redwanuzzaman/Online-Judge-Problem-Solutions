#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cin >> m;
    int arr2[m];
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    sort(arr2, arr2+m);

    cout << arr[n-1] << " " << arr2[m-1] << endl;
}
