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
    int x, y, n;
    sfxy;
    int arr[x], arr2[y];
    vector <int> v;
    for(int i = 0; i < x; i++)
        sfarr;
    for(int i = 0; i < y; i++)
    {
        sfn;
        for(int j = 0; j < x; j++)
        {
            if(arr[j] == n)
            {
                v.push_back(j);
                break;
            }
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
        cout << arr[v[i]] << " ";
}
