#include <bits/stdc++.h>
using namespace std;

#define sfn scanf("%d",&n)
#define MAX 100000004
typedef long long ll;

bitset <MAX> marked;
ll primeCount[MAX];

void sieve()
{
    for(int i = 4; i < MAX; i += 2)
    {
        marked[i] = 1;
    }
    for(int i = 3; i * i <= MAX; i += 2)
    {
        if(marked[i] == 0)
        {
            for(int j = i * i; j <= MAX; j += i+i)
                marked[j] = 1;
        }
    }
    int cnt = 0;
    for(int i = 2; i < MAX; i++)
    {
        if(marked[i] == 0)
        {
            cnt++;
        }
        primeCount[i] = cnt;
    }
}

int main()
{
    sieve();
    double ans, x, tmp;
    ll n;
    while(cin >> n && n)
    {
        tmp = n;
        x = primeCount[n];
        ans = fabs((x - (tmp / log(tmp))) / x) * 100;
        cout << fixed << setprecision(1) << ans << endl;
    }
}
