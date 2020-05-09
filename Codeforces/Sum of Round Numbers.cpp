#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfnm scanf("%d%d",&n,&m)
#define sfarr scanf("%d",&arr[i])
#define sftll scanf("%lld",&t)
#define sfnll scanf("%lld",&n)
#define sfnmll scanf("%lld%lld",&n,&m)
#define sfxyll scanf("%lld%lld",&x,&y)
#define sfarrll scanf("%lld",&arr[i])
#define sf2d scanf("%d%d",&arr[i][j])
#define pi acos(-1)
#define MAX 100000000
typedef long long ll;

int main()
{
    int t, n, m;
    sft;
    while(t--)
    {
        vector <string> v;

        string s, rs = "", ts = "";
        cin >> s;
        int arr[s.size()+2];
        memset(arr, 0, sizeof arr);
        if(s.size() == 1)
        {
            cout << 1 << endl << s << endl;
        }
        else
        {
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] != '0')
                {
                    arr[i+1] = 1;
                }
            }
            for(int i = 1; i <= s.size(); i++)
            {
                if(arr[i] == 1)
                {
                    string tt = "";
                    tt += s[i-1];
                    int sz = s.size() - i;
                    while(sz--)
                    {
                        tt += '0';
                    }
                    v.push_back(tt);
                }
            }
            cout << v.size() << endl;
            for(int i = 0; i < v.size()-1; i++)
            {
                cout << v[i] << " ";
            }
            cout << v[v.size()-1] << endl;
        }
    }
}
