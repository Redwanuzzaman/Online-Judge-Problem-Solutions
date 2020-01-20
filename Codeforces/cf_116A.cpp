#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,total,result=0,MAX=0,a,b,i;
    cin>>test;
    for(i=0; i<test; i++)
    {
        total=0;
        cin>>a>>b;
        total=b-a;
        result=result+total;
        if(result > MAX)
            MAX = result;
    }
    cout<<MAX<<endl;
    return 0;
}
