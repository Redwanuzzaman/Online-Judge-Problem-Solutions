#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n, k, A, B;
    cin>>n>>k>>A>>B;
    unsigned long long int ans=0;
    if(k==1)
    {
        ans = (n-1)*A;
        return cout<<ans<<endl, 0;
    }
    while(n>1){
        if(n<k){
            ans+=(n-1)*A;
            return cout<<ans<<endl, 0;
        }
        ans+= (n%k)*A;
        n-=(n%k);
        int p=n/k;
        if(B <= (n-p)*A){
            ans+=B;
            n=p;
        }
        else{

            ans+=(n-p)*A;
            n=p;
        }
        if(n==1)break;
    }
    cout<<ans<<endl;
    return 0;
}
