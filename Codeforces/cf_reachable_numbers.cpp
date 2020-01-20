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
    int n, cnt = 9;
    sfn;
    while(n > 9)
    {
        n++;
        cnt++;
        while(n % 10 == 0) n /= 10;
    }
    cout << cnt << endl;
}
