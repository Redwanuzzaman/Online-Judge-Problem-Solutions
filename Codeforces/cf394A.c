#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
