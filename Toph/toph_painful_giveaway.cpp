#include <bits/stdc++.h>
using namespace std;
#define sfn scanf("%d",&n)

int main()
{
    int n;
    sfn;
    if(n >= 0)
    {
        for(int i = 0; i < n; i++) printf("%d ", i);
        printf("%d\n", n);
    }
    else
    {
        for(int i = n; i < 0; i++) printf("%d ", i);
            printf("0\n");
    }
}
