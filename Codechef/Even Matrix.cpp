#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)

int main()
{
    int t, n;
    sft;
    while(t--)
    {
        sfn;
        int tmp1 = n, tmp2 = 1, cnt = 1;
        while(true)
        {
            if(cnt & 1)
            {
                for(int i = tmp2; i < tmp1; i++)
                {
                    cout << i << " ";
                }
                cout << tmp1 << endl;
            }
            else
            {
                for(int i = tmp1; i > tmp2; i--)
                {
                    cout << i << " ";
                }
                cout << tmp2 << endl;
            }
            if(tmp1 == (n*n))
            {
                break;
            }
            cnt++;
            tmp2 = tmp1 + 1;
            tmp1 += n;
        }
    }
}
