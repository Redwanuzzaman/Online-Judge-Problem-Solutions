#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, x, mod, a[2], c;
    cin>>n>>x;
    mod=n%6;
    switch(mod)
    {
    case 0:
        a[0]=0;
        a[1]=1;
        a[2]=2;
        break;
    case 1:
        a[0]=1;
        a[1]=0;
        a[2]=2;
        break;
    case 2:
        a[0]=1;
        a[1]=2;
        a[2]=0;
        break;
    case 3:
        a[0]=2;
        a[1]=1;
        a[2]=0;
        break;
    case 4:
        a[0]=2;
        a[1]=0;
        a[2]=1;
        break;
    case 5:
        a[0]=0;
        a[1]=2;
        a[2]=1;
        break;
    default:
        break;
    }
    c=a[x];
    if(c==0){
        cout<<0<<endl;
    }
    else if(c==1){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    return 0;
}
