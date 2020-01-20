#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a;
    cin>>n;
    a = -1*(n/2+1);
    if(n%2==0)
        cout<<n/2<<endl;
    else
        cout<<a<<endl;

    return 0;
}
