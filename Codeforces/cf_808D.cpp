#include <bits/stdc++.h>
using namespace std;

#define sfn scanf("%lld",&n)
#define sfarr scanf("%lld",&arr[i])

typedef long long ll;

int main()
{
    ll n, sum = 0, subSum = 0;
    sfn;
    ll arr[n+2];
    for(int i = 0; i < n; i++)
    {
        sfarr;
        sum += arr[i];
    }
    if(sum & 1)
    {
        return cout << "NO\n", 0;
    }
    map <ll , int> suffix, prefix;

    prefix[arr[0]] = 1;

    for(int i = 1; i < n; i++)
    {
        suffix[arr[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        subSum += arr[i];
        if(subSum == sum/2)
        {
            return cout << "YES\n", 0;
        }
        if(subSum < sum/2)
        {
            ll tmp = sum/2 - subSum;
            if(suffix[tmp] > 0)
            {
                return cout << "YES\n", 0;
            }
        }
        else
        {
            ll tmp = subSum - sum/2;
            if(prefix[tmp] > 0)
            {
                return cout << "YES\n", 0;
            }
        }
        prefix[arr[i+1]]++;
        suffix[arr[i+1]]--;
    }
    cout << "NO\n";
}
