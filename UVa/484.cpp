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
    map <int, int> mp;
    vector <int> seq;
    int n;
    while(sfn != EOF)
    {
        if(mp.count(n) == 0)
        {
            mp[n]++;
            seq.push_back(n);
        }
        else mp[n]++;
    }
    for(int i = 0; i < seq.size(); i++)
        cout << seq[i] << " " << mp[seq[i]] << endl;
}
