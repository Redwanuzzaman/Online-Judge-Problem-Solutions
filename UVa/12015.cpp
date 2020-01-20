#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,Case=1,relevance[10],hr;
    char str [10][101];
    cin>>test;
    for(int j=1; j<=test; j++)
    {
        hr=0;
        for(int i=0; i<10; i++)
        {
            scanf("%s %d",&str[i],&relevance[i]);
            if(hr<relevance[i]) hr=relevance[i];
        }
        printf("Case #%d:\n",j);
        for(int i=0; i<10; i++)
            if(relevance[i]==hr) printf("%s\n",str[i]);
    }
    return 0;
}
