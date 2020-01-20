#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define MAX 8000003
bool marked[MAX+2];
vector <int> prime;

void sieve()
{
    int root = sqrt(MAX);
    for(int i = 3; i <= root; i += 2)
    {
        if(marked[i] == false)
        {
            for(int j = i * i; j <= MAX; j += i)
                marked[j] = true;
        }
    }
    prime.push_back(1);
    prime.push_back(2);
    for(int i = 3; i <= MAX; i += 2)
    {
        if(marked[i] == false) prime.push_back(i);
    }
}

int main()
{
    sieve();
    int t;
    sft;
    printf("%d\n", prime[t]);
}
