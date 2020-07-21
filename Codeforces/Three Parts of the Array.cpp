#include <bits/stdc++.h>
using namespace std;

#define sfn scanf("%lld",&n)
#define sfarr scanf("%lld",&arr[i])
typedef long long ll;

int main()
{
    ll n, ans = 0, sum1 = 0, sum2 = 0;
    sfn;
    ll arr[n+1];
    for(ll i = 0; i < n; i++)
    {
        sfarr;
    }
    ll i = 0, j = n-1;
    while(i <= j)
    {
        if(i == 0 and j == n-1)
        {
            sum1 += arr[i++];
            sum2 += arr[j--];
        }
        else if(sum1 == sum2)
        {
            ans = max(ans, sum1);
            if(i != j)
            {
                sum1 += arr[i++];
                sum2 += arr[j--];
            }
            else
            {
                break;
            }
        }
        else if(sum1 > sum2)
        {
            sum2 += arr[j--];
        }
        else
        {
            sum1 += arr[i++];
        }
        //printf("sum1 = %lld, sum2 = %lld, i = %lld, j = %lld\n", sum1, sum2, i, j);
    }
    if(n < 2)
    {
        ans = 0;
    }
    else if(sum1 == sum2)
    {
        ans = max(ans, sum1);
    }
    cout << ans << endl;

}
