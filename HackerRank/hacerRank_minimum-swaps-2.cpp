#include <bits/stdc++.h>
using namespace std;
#define sfn scanf("%d",&n)
#define sfarr scanf("%d",&arr[i])

int main()
{
    int n, ans = 0;
    sfn;
    int arr[n+4], mark[n+4];
    for(int i = 1; i <= n; i++)
    {
        sfarr;
        mark[arr[i]] = i;
    }

    for(int i = 1; i <= n; i++)
    {
        if(arr[i] != i)
        {
            ans++;
            int tmp = arr[i];
            int pos = mark[i];

            swap(arr[i], arr[mark[i]]);

            mark[i] = i;
            mark[tmp] = pos;
        }
    }
    cout << ans << endl;
}
