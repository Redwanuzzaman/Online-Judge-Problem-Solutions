#include<stdio.h>

int main()
{
    int t,a,b,c,i,result1,result2,result3;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        result1=((a*a)+(b*b))-(c*c);
        result2=((a*a)+(c*c)-(b*b));
        result3=((b*b)+(c*c)-(a*a));

        if(result1==0 || result2==0 || result3==0)
        {
            printf("Case %d: yes\n",i);
        }
        else
        {
            printf("Case %d: no\n",i);
        }
    }

    return 0;
}
