#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sfq scanf("%d",&q)
#define sfn scanf("%d",&n)

int main()
{
    int n, cnt, mx = 1;
    sfn;
    int arr[n+2];
    for(int i = 0; i < n; i++) cin >> arr[i];
    arr[n] = INT_MAX;
        sort(arr, arr+n+1);
    for(int i = 0; i < n; i++)
    {
        cnt = upper_bound(arr, arr+n+1, arr[i]+5) - arr;
        if(arr[cnt] > arr[i]+5) cnt--;
        mx = max(mx, int(cnt-i+1));
    }
    cout << mx << endl;
}
