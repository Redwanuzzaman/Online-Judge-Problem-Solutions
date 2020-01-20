#include<stdio.h>

int main()
{
    int total,i,j;
    char a[10];

    scanf("%d",&total);
    for(j=0;j<total;j++)
    {
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++);
        if(i==5)
            printf("3\n");
        else if((a[0]=='o' && a[1]=='n') || (a[0]=='o' && a[2]=='e') || (a[1]=='n' && a[2]=='e'))
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
