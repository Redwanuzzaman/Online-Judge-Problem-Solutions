#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n+2];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);

    int div = n/3;
    int x = 2, team = 0;
    while(div--)
    {
        if(arr[x] + k <= 5) team++;
        x += 3;
    }
    cout << team << endl;
}
