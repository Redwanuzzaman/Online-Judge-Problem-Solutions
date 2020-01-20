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
    int n, res = 0, tmp, t1, t2;
    sfn;
    string s;
    map <char, int> mp;
    while(n--)
    {
        cin >> s;
        mp[s[0]]++;
    }
    map <char, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        tmp = it -> second;
        if(tmp > 2)
        {
            t1 = tmp/2;
            t2 = tmp - t1;
            --t2;
            --t1;
            t1 = (t1 * (t1 + 1)) / 2;
            t2 = (t2 * (t2 + 1)) / 2;
            res += (t1 + t2);
        }
    }
    cout << res << endl;
}
