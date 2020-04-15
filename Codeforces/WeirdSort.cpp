#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfnm scanf("%d%d",&n,&m)
#define sfarr scanf("%d",&arr[i])

int main()
{
    int t, n, m, x, pos;
    sft;
    while(t--)
    {
        sfnm;
        int arr[n+3];
        int swp[m+1];
        for(int i = 0; i < n; i++)
        {
            sfarr;
        }
        for(int i = 0; i < m; i++)
        {
            cin >> swp[i];
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(arr[swp[j]-1] > arr[swp[j]])
                {
                    swap(arr[swp[j]-1], arr[swp[j]]);
                }
            }
        }
        if(is_sorted(arr, arr+n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
