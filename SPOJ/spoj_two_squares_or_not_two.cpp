#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%lld",&t)
#define sfn scanf("%lld",&n)
typedef long long ll;

bool binSearch(ll n, ll high)
{
    ll a = high, low = 0, mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(pow(a, 2) + pow(mid, 2) == n)
        {
            return true;
        }
        else if(pow(a, 2) + pow(mid, 2) > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}

int main()
{
    ll t, n , root;
    sft;
    while(t--)
    {
        bool status = false;
        sfn;
        root = sqrt(n);
        for(ll i = root; i >= 0; i--)
        {
            status = binSearch(n, i);
            if(status) break;
        }
        if(status) printf("Yes\n");
        else printf("No\n");
    }
}
