#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfnm scanf("%d%d",&n,&m)
#define sfarr scanf("%d",&arr[i])

int main()
{
    int t, n;
    sft;
    while(t--)
    {
        sfn;
        int arr[n], f = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
            {
                for(int j = i+1; j < i+6 && j < n; j++)
                {
                    if(arr[j] == 1)
                    {
                        f = 1;
                        break;
                    }
                }
            }
            if(f == 1) break;
        }
        if(f == 1) cout << "NO\n";
        else cout << "YES\n";
    }
}
