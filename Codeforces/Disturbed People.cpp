#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] == 0 && arr[i-1] == 1 && arr[i+1] == 1)
        {
            arr[i+1] = 0;
            cnt++;
        }
    }
    cout << cnt << endl;
}
