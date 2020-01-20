#include<stdio.h>

int main()
{
    int a,b,c,i,j,k,l,m,n;
    scanf("%d %d %d",&a,&b,&c);

    i= a+b+c;
    j= a*b*c;
    k= a+b*c;
    l= a*b+c;
    m= (a+b)*c;
    n= a*(b+c);

    if(i>j && i>k && i>l && i>m && i>n )
        printf("%d\n",i);
    else if(j>i && j>k && j>l && j>m && j>n)
        printf("%d\n",j);
    else if(k>i && k>j && k>l && k>m && k>n)
        printf("%d\n",k);
    else if(l>i && l>j && l>k && l>m && l>n)
        printf("%d\n",l);
    else if(m>i && m>j && m>k && m>l && m>n)
        printf("%d\n",m);
    else
        printf("%d\n",n);
    return 0;

}
