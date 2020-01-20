
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,a,b,result=0;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        result=0;
        cin>>a>>b;
        for(int j=a; j<=b;j++)
        {
            if(j%2==1) result=result+j;
        }
        cout<<"Case "<<i<<": "<<result<<endl;
    }
    return 0;
}
