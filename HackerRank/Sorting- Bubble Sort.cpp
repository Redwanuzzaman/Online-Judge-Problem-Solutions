#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(arr[j] < arr[j-1])
            {
                swap(arr[j], arr[j-1]);
                ans++;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n", ans);
    printf("First Element: %d\nLast Element: %d\n", arr[0], arr[n-1]);
}
