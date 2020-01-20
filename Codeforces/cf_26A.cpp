#include <bits/stdc++.h>
using namespace std;

#define MAX 3000
bool marked[MAX];
vector <int> divs;
int arr[3001];

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
}
bool isPrime(int n)
{
    if(n == 2) return true;
    if(n < 2 || (n % 2 == 0)) return false;
    return marked[n] == false;
}
void divisors(int n)
{
    for(int i = 1; i * i <= n; i++)
    {
        if(i * i == n) divs.push_back(i);
        else if(n % i == 0)
        {
            divs.push_back(i);
            divs.push_back(n/i);
        }
    }
}
int main()
{
    sieve();
    int n, res = 0;
    cin >> n;
    for(int i = 6; i <= n; i++)
    {
        int cnt = 0;
        divisors(i);
        for(int i = 0; i < divs.size(); i++)
        {
            if(isPrime(divs[i])) cnt++;
        }
        if(cnt == 2) res++;
        divs.clear();
    }
    cout << res << endl;
}
