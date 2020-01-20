#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n == 1) return false;
    int i = 2;
    while(i*i <= n)
    {
        if(n % i == 0) return false;
        i++;
    }
    return true;
}

int main()
{
    int n, x;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(isPrime(x)) printf("%d is a prime number.\n", x);
        else printf("%d is not a prime number.\n", x);
    }
}
