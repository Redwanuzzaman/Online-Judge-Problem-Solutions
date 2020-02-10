#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cnt = 0;
    cin >> n >> m;
    int arr[2*m+1];
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < 2*m; i++) cin >> arr[i];
        for(int i = 0; i < 2*m; i += 2)
        {
            if(arr[i] == 1) cnt++;
        }
        for(int i = 1; i < 2*m; i += 2)
        {
            if(arr[i] == 1 && arr[i-1] != 1) cnt++;
        }
    }
    cout << cnt << endl;
}
