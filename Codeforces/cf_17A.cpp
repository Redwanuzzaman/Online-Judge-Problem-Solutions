#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
bool marked[MAX];
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
    for(int i = 3; i <= MAX; i += 2)
        if(marked[i] == false) prime.push_back(i);
}
int main()
{
    sieve();
    int n, k, sum, cnt = 0;
    cin >> n >> k;
    for(int i = 0; prime[i] <= n; i++)
    {
        sum = prime[i] + prime[i+1] + 1;
        if(sum <= n && marked[sum] == false) cnt++;
    }
    if(cnt >= k) cout << "YES\n";
    else cout << "NO\n";
}
