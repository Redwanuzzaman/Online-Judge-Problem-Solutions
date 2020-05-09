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
        sfnm;
        if(n % m == 0)
        {
            cout << "YES" << endl;
            int d = n/m;
            for(int i = 0; i < m-1; i++)
            {
                cout << d << " ";
            }
            cout << d << endl;
        }
        else if(m > n)
        {
            cout << "NO" << endl;
        }
        else if((n & 1) && (m % 2 == 0))
        {
            cout << "NO" << endl;
        }
        else if((n & 1) && (m & 1))
        {
            cout << "YES\n";
            for(int i = 1; i < m; i++)
            {
                cout << 1 << " ";
            }
            cout << n-m+1 << endl;
        }
        else if(n-m == 1)
        {
            cout << "NO\n";
        }
        else if((n % 2 == 0) && (m < n/2))
        {
            cout << "YES\n";
            for(int i = 1; i < m; i++)
            {
                cout << 2 << " ";
            }
            int ans = (m-1) * 2;
            cout << n-ans << endl;
        }
        else if((n % 2 == 0) && (m > n/2) && (((n-m) % 2) == 0))
        {
            cout << "YES\n";
            for(int i = 1; i < m; i++)
            {
                cout << 1 << " ";
            }
            cout << n-m+1 << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}
