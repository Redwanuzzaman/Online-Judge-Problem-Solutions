#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfarr scanf("%d",&arr[i])

int main()
{
    int t, n, mid;
    sft;
    while(t--)
    {
        sfn;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            sfarr;
        }
        sort(arr, arr+n);
        if(n & 1)
        {
            mid = n/2;
            cout << arr[mid] << " ";
            for(int i = mid-1, j = mid+1; i >= 0, j < n; i--, j++)
            {
                if(i == 0 or j == n-1)
                {
                    cout << arr[i] << " " << arr[j] << endl;
                }
                else
                {
                    cout << arr[i] << " " << arr[j] << " ";
                }
            }
        }
        else
        {
            mid = n/2;
            for(int i = mid-1, j = mid; i >= 0, j < n; i--, j++)
            {
                if(i == 0 or j == n-1)
                {
                    cout << arr[i] << " " << arr[j] << endl;
                }
                else
                {
                    cout << arr[i] << " " << arr[j] << " ";
                }
            }
        }
    }
}
