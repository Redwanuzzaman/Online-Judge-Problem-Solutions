#include <bits/stdc++.h>
using namespace std;

int countDivisor(int n)
{
    int divisor = 0, odd = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            if(n & 1)
                odd++;

        }
        else if (n % i == 0)
        {
            if(i & 1)
                odd++;
            if((n/i) & 1)
                odd++;
        }
    }
    if(odd & 1)
    {
        return odd;
    }
}

int main()
{
    freopen("output.txt", "w", stdout);
    for(int i = 1; i < 10001; i++)
    {
        int oddDiv = countDivisor(i);
        if(oddDiv & 1)
        {
            cout << setw(4) << i << " : " << oddDiv << endl;
        }
    }
}
