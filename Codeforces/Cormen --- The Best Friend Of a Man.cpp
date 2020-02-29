//Rechecking

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, sum = 0, tmp, dif;
    cin >> n >> k;
    int arr[n+2];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 1; i < n; i++)
    {
        tmp = arr[i] + arr[i-1];
        if(tmp < k)
        {
            dif = k - tmp;
            sum += dif;
            arr[i] += dif;
        }
        else continue;
    }
    cout << sum << endl;
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
