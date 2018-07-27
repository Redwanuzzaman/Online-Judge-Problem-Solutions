#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    double arr1[n+1];
    double arr2[n+1], mx = -500000;
    for (int j = 0; j <= n; ++j)
    {
        arr2[j]=0;
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr1[i];
        arr2[i] = arr2[i-1]+arr1[i];
    }
    for (int l = 1; l <= n; ++l)
    {
        for (int i = l+k-1; i <=n; ++i)
        {
            double t = (arr2[i]-arr2[l-1])/(1.0*(i-l+1));
            mx = max(t, mx);
        }
    }
    cout<< fixed << setprecision(15) << mx <<endl;
}