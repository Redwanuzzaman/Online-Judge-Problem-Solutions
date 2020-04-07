// Fully Solved
// CodeJam 2018, Qualification Round, Problem B

#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfarr scanf("%d",&arr[i])

int sorted(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            int tmp = (i-1);
            return tmp;
        }
    }
    return -1318;
}

int main()
{
    int t, n, cs = 1;
    sft;
    while (t--)
    {
        sfn;
        int arr[n], ans = -1318, ix1 = 0, ix2 = 0;
        bool ok = false;
        for(int i = 0; i < n; i++)
        {
            sfarr;
        }
        printf("Case #%d: ", cs++);

        vector <int> even, odd;
        for(int i = 0; i < n; i++)
        {
            if(i & 1)
                odd.push_back(arr[i]);
            else
                even.push_back(arr[i]);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        for(int i = 0; i < n; i++)
        {
            if(i & 1)
            {
                arr[i] = odd[ix2++];
            }
            else
            {
                arr[i] = even[ix1++];
            }
        }
        int result = sorted(arr, n);

        if(result == -1318)
            printf("OK\n");
        else
            printf("%d\n", result);
    }
}
