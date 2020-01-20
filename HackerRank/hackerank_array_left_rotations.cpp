#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;
    int arr[n+2];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = r; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for(int i = 0; i < r-1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr[r-1] << endl;
}
