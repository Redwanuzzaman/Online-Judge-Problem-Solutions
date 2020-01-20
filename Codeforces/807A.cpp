#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,a,b,cnt=0,cnt2=0,i,temp=0;
    cin>>test;

    for(i=1; i<=test; i++)
    {
        cin>>a>>b;
        if(a!=b)
            cnt2++ ;
        if(i==1)
            temp = a;
        else if(temp >= a)
            temp = a;
        else
            cnt++;
    }

    if(cnt2>0)
        cout<<"rated"<<endl;
    else if(cnt>0)
        cout<<"unrated"<<endl;
    else
        cout<<"maybe"<<endl;

    return 0;
}
