va#include <bits/stdc++.h>
using namespace std;

#define MAX 100005
typedef long long ll;
bool marked[MAX];
ll arr[1000010];
vector <int> prime;

void sieve()
{
    for(int i = 3; i * i <= MAX; i += 2)
    {
        if(marked[i] == false)
        {
            for(int j = i * i; j <= MAX; j += i+i)
                marked[j] = true;
        }
    }
    prime.push_back(2);
    for(int i = 3; i < MAX; i += 2)
    {
        if(marked[i] == false)
        {
            prime.push_back(i);
        }
    }
}
ll divCount(ll n)
{
    ll cnt = 0;
    for(int i = 0; prime[i] * prime[i] <= n; i++)
    {
        while(n % prime[i] == 0)
        {
            cnt++;
            n /= prime[i];
        }
    }
    if(n > 1) cnt++;
    return cnt;
}

int main()
{
    sieve();
    ll n;
    arr[0] = 0;
    arr[1] = 0;
    for(ll i = 2; i < 1000005; i++)
    {
        arr[i] = arr[i-1] + divCount(i);
    }
    while(cin >> n)
    {
        printf("%lld\n", arr[n]);
    }
}
