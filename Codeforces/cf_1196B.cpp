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
        int arr[x], odd = 0, cnt = 0;
        vector <int> v;
        for(int i = 0; i < x; i++)
        {
            sfarr;
            if(arr[i] & 1) odd++;
        }
        if(odd < y || ((odd+y) & 1)) cout << "NO\n";
        else
        {
            cout << "YES\n";
            if(y == 1) cout << x << endl;
            else
            {
                for(int i = 0; i < x; i++)
                {
                    if(arr[i] & 1)
                    {
                        cout << i+1 << " ";
                        cnt++;
                        if(cnt == y-1) break;
                    }
                }
                cout << x << endl;
            }
        }
    }
}

