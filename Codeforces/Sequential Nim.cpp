#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)

int main()
{
    int t, n, m;
    sft;
    while(t--)
    {
        sfn;
        int pos = 0, x;
        for(int i = 1; i <= n; i++)
        {
            cin >> x;
            if(x > 1 and pos == 0)
            {
                pos = i;
            }
        }
        if(pos == 0)
        {
            if(n & 1) cout << "First\n";
            else cout << "Second\n";
        }
        else
        {
            if(pos & 1) cout << "First\n";
            else cout << "Second\n";
        }
    }
}
