#include <bits/stdc++.h>
using namespace std;
#define sfxy scanf("%d%d",&x,&y)

int main()
{
    int x, y;
    sfxy;
    y -= x;
    y /= 2;
    y += x;
    printf("%d\n", y);
}

