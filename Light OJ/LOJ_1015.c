#include<stdio.h>

int main()
{
    int T,N,i,j,a,sum=0;
    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        sum=0;

        for(j=1; j<=N; j++)
        {
            scanf("%d",&a);
            {
                if(a>0)
                    (sum=sum+a);
            }
        }

        printf("Case %d: %d\n",i,sum);
    }

    return 0;
}
