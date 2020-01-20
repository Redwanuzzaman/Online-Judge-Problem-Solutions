#include<bits/stdc++.h>
using namespace std;

int main()
{
    int price,dollars,ban,mul,sum=0;
    cin>>price>>dollars>>ban;

    for(int i=1; i<=ban; i++)
    {
        mul=0;
        mul=i*price;
        sum=sum+mul;
    }
    int loan = sum-dollars;
    if(loan > 0)
        cout<<loan<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}
