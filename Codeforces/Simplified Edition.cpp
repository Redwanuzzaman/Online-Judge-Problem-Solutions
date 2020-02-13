#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0;
    cin>>n;
    sum=2*n-1;
    int ar[n];
    for(int i=0;i<n;i++)
      cin>>ar[i];
      sum+=ar[0];
    for(int i=1;i<n;i++)
      sum+=abs(ar[i]-ar[i-1]);
    cout<<sum;
    
}
