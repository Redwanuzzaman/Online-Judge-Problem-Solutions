#include<stdio.h>

int main()
{
    int t,a,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        if(360%(180-a)==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
