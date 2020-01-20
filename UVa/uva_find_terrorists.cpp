#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfarr scanf("%d",&arr[i])
#define sf2d scanf("%d",&arr[i][j])
#define pi acos(-1)
typedef long long ll;

bool isPrime(int n)
{
    if(n == 1)
        return false;
    int i = 2;
    while(i*i <= n)
    {
        if(n % i == 0)
            return false;
        i++;
    }
    return true;
}

int main()
{
    int t, x, y;
    sft;
    while(t--)
    {
        sfxy;
        int cnt = 0,flag = 0;
        vector <int> v;
        for(int i = x; i <= y; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(i % j == 0)
                {
                    cnt++;
                }
            }
            if(isPrime(cnt) == true)
            {
                v.push_back(i);
                flag = 1;
            }
            cnt = 0;
        }

        if(flag == 0) cout << -1 << endl;
        else
        {
            for(int i = 0; i < v.size()-1; i++) cout << v[i] << " ";
            cout << v[v.size()-1] << endl;
        }
    }
}
