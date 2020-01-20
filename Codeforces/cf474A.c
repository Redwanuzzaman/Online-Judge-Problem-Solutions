#include<stdio.h>
#include<string.h>

int main()
{
    char keyboard[101]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char shifting[3];
    char str[101];
    int i,j;

    scanf("%s",&shifting);
    scanf("%s",str);

    if(shifting[0]=='L')
    {
        for(i=0;i<strlen(str);i++)
        {
            for(j=0;j<strlen(keyboard);j++)
            {
                if(str[i]==keyboard[j])
                {
                    printf("%c",keyboard[j+1]);
                    break;
                }
            }
        }
        printf("\n");
    }
    else
    {
        for(i=0;i<strlen(str);i++)
        {
            for(j=0;j<strlen(keyboard);j++)
            {
                if(str[i]==keyboard[j])
                {
                    printf("%c",keyboard[j-1]);
                    break;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
