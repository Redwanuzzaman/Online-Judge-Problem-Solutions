#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, tk, ans = 0;
    scanf("%d %d", &n, &tk);
    int arr[n+1];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > tk)
        {
            break;
        }
        else
        {
            ans++;
            tk -= arr[i];
        }
    }
    printf("%d\n", ans);
}
