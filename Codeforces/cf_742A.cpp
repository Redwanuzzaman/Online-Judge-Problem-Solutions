#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,result=0,ans;
    cin>>n;
    result = powl(8,n);
    ans = (result%10);
    cout<<ans<<endl;
    return 0;
}
