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
    int t, x, y;
    sft;
    while(t--)
    {
        sfxy;
        if((x+y) & 1) cout << 2 << endl;
        else cout << 12 << endl;
    }
}

