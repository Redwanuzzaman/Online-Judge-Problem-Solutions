#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfarr scanf("%d",&arr[i])
#define sf2d scanf("%d",&arr[i][j])
#define pi acos(-1)
typedef long long ll;

int main()
{
    int t, n;
    sft;
    while(t--)
    {
        sfn;
        int arr[n], c = 0;
        for(int i = 0; i < n; i++)
            sfarr;
        for(int i = 0; i < n; i++)
        {
            for(int j = n-1; j > i; j--)
            {
                if(arr[j] < arr[j-1])
                {
                    swap(arr[j], arr[j-1]);
                    c++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
}
