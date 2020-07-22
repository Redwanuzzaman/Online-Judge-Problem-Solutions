#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
bool marked[3000003];
void sieve(int n)
{
    marked[1] = true;
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
    int t, n;
    sieve(1000005);
    sft;
    while(t--)
    {
        sfn;
        if(n % 2 == 0 and n != 2) printf("%d is not a prime number.\n", n);
        else if(!marked[n]) printf("%d is a prime number.\n", n);
        else printf("%d is not a prime number.\n", n);
    }
}
