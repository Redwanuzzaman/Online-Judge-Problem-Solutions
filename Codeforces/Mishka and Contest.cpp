#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, cnt = 0, tmp1 = 0, tmp2;
    cin >> n >> k;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    while((arr[tmp1] <= k) && (tmp1 < n)) cnt++, tmp1++;
    tmp2 = n-1;
    while((arr[tmp2] <= k) && (tmp2 >= tmp1)) cnt++, tmp2--;
    cout << cnt << endl;
}
