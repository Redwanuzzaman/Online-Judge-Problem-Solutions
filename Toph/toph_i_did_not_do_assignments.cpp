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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(isPrime(n)) cout << "NO PUNISHMENT" << endl;
    else
    {
        while(n--) cout << "I DID NOT DO THE ASSIGNMENT." << endl;
    }
}
