#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0, sum2 = 0;
    cin >> n;
    int arr[n*n + 5];
    for(int i = 1; i <= n*n; i++) cin >> arr[i];
    for(int i = 1; i <= n*n; i += (n+1)) sum += arr[i];
    for(int i = ((n*n) - (n-1)); i >= n; i -= (n-1)) sum2 += arr[i];

    cout << abs(sum - sum2) << endl;
}
