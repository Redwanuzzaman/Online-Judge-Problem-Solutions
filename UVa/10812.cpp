#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,a,b,x,y;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        if (a>=b && (a+b)%2==0)
        {
            x=(a+b)/2;
            y=(a-b)/2;
            cout<<x<<" "<<y<<endl;
        }
        else
            cout<<"impossible"<<endl;
    }
    return 0;
}
