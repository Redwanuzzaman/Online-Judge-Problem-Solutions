#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,a,b,c,t1,t2,t3,t1sum=0,t2sum=0,t3sum=0;
    cin>>test;

    for(int i=0; i<test; i++)
    {
        cin>>a>>b>>c;
        t1=a;
        t2=b;
        t3=c;
        t1sum+=t1;
        t2sum+=t2;
        t3sum+=t3;
    }
    if(t1sum==0 && t2sum==0 && t3sum==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
