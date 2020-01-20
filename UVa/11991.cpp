#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfarr scanf("%d",&arr[i])
#define sf2d scanf("%d",&arr[i][j])
#define pi acos(-1)
#define Max 1000002
typedef long long ll;

vector <int> v[Max];

int main()
{
    int n, m, x, y;
    while(cin >> n >> m)
    {
        for(int i = 1; i <= Max; i++) v[i].clear();
        for(int i = 1; i <= n; i++)
        {
            cin >> x;
            v[x].push_back(i);
        }
        while(m--)
        {
            sfxy;
            if(v[y].size() < x) cout << "0\n";
            else cout << v[y][x-1] << endl;
        }
    }
}
