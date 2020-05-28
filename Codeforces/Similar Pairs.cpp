#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfarr scanf("%d",&arr[i])

int main()
{
    int t, n;
    sft;
    while(t--)
    {
        sfn;
        int arr[n+1], ev = 0, od = 0;
        for(int i = 0; i < n; i++)
        {
            sfarr;
            if(arr[i] % 2 == 0)
            {
                ev++;
            }
            else
            {
                od++;
            }
        }
        bool diff = false;
        sort(arr, arr+n);
        for(int i = 1; i < n; ++i)
        {
            if((abs(arr[i] - arr[i-1])) == 1)
            {
                diff = true;
            }
        }
        if((ev % 2 == 0 && od % 2 == 0) || (diff == true))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
