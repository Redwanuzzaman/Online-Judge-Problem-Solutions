#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    if(n<6)cout<<"-1"<<endl;
    else{
        int mid = n/2 +1;
        for(int i=2;i<=mid;++i)cout<<"1 "<<i<<endl;
        for(int i=mid+1;i<=n;++i)cout<<"2 "<<i<<endl;
        }
    for(int i=1;i<n;++i)cout<<i<<" "<<i+1<<endl;
    return 0;
}
