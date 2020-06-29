#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, string[201], sentence[201];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%c", &ch);
    scanf("%s", string);
    /*getchar();*/
    scanf("\n");
    scanf("%[^\n]%*c", sentence);
    printf("%c\n",ch);
    printf("%s\n", string);
    printf("%s\n", sentence);
    return 0;
}


/*
both of this does the same.

getchar();
scanf("\n"); 
*/
