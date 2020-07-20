#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfnm scanf("%d%d",&n,&m)

int main()
{
    int t, n, m;
    sft;
    while(t--)
    {
        int sum = 0, num, ans = -1;
        sfnm;
        for(int i = 1; i <= n; i++)
        {
            cin >> num;
            sum += num;
            if(sum % m)
            {
                ans = max(ans, max(i, n - i));
            }
        }
        cout << ans << endl;
    }
}
