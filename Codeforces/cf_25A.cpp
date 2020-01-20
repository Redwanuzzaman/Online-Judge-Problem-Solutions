#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,even=0,odd=0,ei,oi;
    cin>>test;

    for(int i=1; i<=test; i++)
    {
        cin>>n;
        if(n%2==0)
        {
            even++;
            ei=i;
        }
        else
        {
            odd++;
            oi=i;
        }
    }
    if(even==1)
        cout<<ei<<endl;
    else
        cout<<oi<<endl;

    return 0;
}
