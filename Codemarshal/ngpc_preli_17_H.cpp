#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfarr scanf("%d",&arr[i])

int main()
{
    int t, n;
    sft;
    while(t--)
    {
        sfn;
        int arr[n], mx = 0;
        for(int i = 0; i < n; i++)
        {
            sfarr;
        }
        for(int i = 0; i < n; i++)
        {
            int tmp = arr[i], cnt = 1;
            for(int j = i+1; j < n; j++)
            {
                if(arr[j] < tmp)
                {
                    cnt++;
                    tmp = arr[j];
                }
            }
            mx = max(cnt, mx);
        }
        cout << mx << endl;
    }
}


