#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,result=0;
    cin>>n>>m>>a;
    result= ceil((double) n/a)* ceil((double) m/a);
    cout<<result<<endl;
    return 0;
}
