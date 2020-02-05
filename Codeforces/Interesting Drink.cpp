#include <bits/stdc++.h>
using namespace std;

#define sfq scanf("%d",&q)
#define sfn scanf("%d",&n)
#define sfx scanf("%d",&x)
#define sfarr scanf("%d",&arr[i])

int main()
{
    int n, q, x;
    sfn;
    vector <int> mim;
    for(int i = 0; i < n; i++)
    {
        sfx;
        mim.push_back(x);
    }
    sort(mim.begin(), mim.end());
    sfq;
    while(q--)
    {
        sfx;
        int res = upper_bound(mim.begin(), mim.end(), x) - mim.begin();
        cout << res << endl;
    }
}
