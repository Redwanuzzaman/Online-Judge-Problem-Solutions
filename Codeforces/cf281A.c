#include<stdio.h>

int main()
{
    char s[1001];
    scanf("%s",s);
    if(s[0]>=97)
        s[0]=s[0]-32;
    printf("%s\n",s);
    return 0;
}
