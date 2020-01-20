#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfnm scanf("%d%d",&n,&m)
#define sfarr scanf("%d",&arr[i])
#define sf2d scanf("%d",&arr[i][j])
#define pi acos(-1)
typedef long long ll;

int main()
{
    int t, x, y, cs = 1, n, m;
    sft;
    while(t--)
    {
        int sum = -1e9;
        sfxy;
        while(x--)
        {
            sfnm;
            if(m > y) sum = max (sum, (n - (m - y)));
            else sum = max(sum, n);
        }
        cout << "Case #" << cs++ << ": " << sum << endl;
    }
}

