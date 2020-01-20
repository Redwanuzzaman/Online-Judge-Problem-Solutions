#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        int f = 0;
        for(int j = i-1, k = 1; j >= 0 && k <= x; j--, k++)
        {
            if(arr[j] < arr[i])
            {
                f = 1;
                break;
            }
            if(k == x)
            {
                break;
            }
        }
        for(int j = i+1, k = 1; j < n && k <= y; j++, k++)
        {
            if(f == 1)
            {
                break;
            }
            if(arr[j] < arr[i])
            {
                f = 1;
                break;
            }
            if(k == y)
            {
                break;
            }
        }
        if(f == 0) return cout << i+1 << endl, 0;
    }
}
