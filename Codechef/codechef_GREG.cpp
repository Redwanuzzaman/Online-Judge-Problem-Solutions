#include <bits/stdc++.h>
using namespace std;

bool marked[2000003];

bool isPrime(int n)
{
    if(n == 2) return true;
    if(n < 2 || (n % 2 == 0)) return false;
    return marked[n] == false;
}

void sieve(int n)
{
    for(int i = 3; i * i <= n; i += 2)
    {
        if(marked[i] == false)
        {
            for(int j = i * i; j <= n; j += i+i)
                marked[j] = true;
        }
    }
}
int main()
{
    int n, m, cnt = 0;
    cin >> n >> m;
    sieve(n+m);
    for(int i = 2; i <= n+m; i++)
    {
        if(isPrime(i) == true) cnt++;
    }
    cout << cnt << endl;
}
