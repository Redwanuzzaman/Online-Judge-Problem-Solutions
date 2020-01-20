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
    int t, x, y, k;
    sft;
    while(t--)
    {
        sfxy;
        bool arr[x+1];
        memset(arr, false, sizeof arr);
        vector <int> v, v1, v2;
        for(int i = 0; i < y; i++)
        {
            cin >> k;
            arr[k] = 1;
        }
        for(int i = 1; i <= x; i++)
            if(arr[i] == 0) v.push_back(i);
        for(int i = 0; i < v.size(); i += 2) v1.push_back(v[i]);
        for(int i = 1; i < v.size(); i += 2) v2.push_back(v[i]);
        if(v1.size() == 0) cout << endl;
        else
        {
            for(int i = 0; i < v1.size()-1; i++) cout << v1[i] << " ";
            cout << v1[v1.size()-1] << endl;
        }
        if(v2.size() == 0) cout << endl;
        else
        {
            for(int i = 0; i < v2.size()-1; i++) cout << v2[i] << " ";
            cout << v2[v2.size()-1] << endl;
        }
    }
}
