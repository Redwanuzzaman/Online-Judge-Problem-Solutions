#include<stdio.h>

int main()
{
    int a,b,i,count=0;
    int round[101];

    scanf("%d%d",&a,&b);

    for(i=1;i<=a;++i)
    {
        scanf("%d",&round[i]);
    }
    for(i=1;i<=a;++i)
    {
        if(round[i]>=round[b] && round[i]!=0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
