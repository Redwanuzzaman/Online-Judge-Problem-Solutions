#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,result=0;
    cin>>n;
    if(n%2 == 0)
        result = (n+(n/2))%(n+1) ;
    else
        result = (n+(n/2))%n ;
    cout<<result<<endl;
    return 0;
}
