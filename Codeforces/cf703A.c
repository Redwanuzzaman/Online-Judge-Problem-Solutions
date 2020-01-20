#include<stdio.h>

int main()
{
    int t,i,a,b,sum1=0,sum2=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
            sum1++;
        else if(a<b)
            sum2++;
    }

    if(sum1>sum2)
        printf("Mishka\n");
    else if(sum1<sum2)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");
    return 0;
}
