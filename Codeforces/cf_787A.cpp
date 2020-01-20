#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,i,r=-1;
    int ab[10001];
    int cd[10001];

    cin>>a>>b>>c>>d;

    for(i=0; i<=10000; i++)
    {
        ab[i]= b+a*i ;
    }

    for(i=0; i<=10000; i++)
    {
        cd[i]= d+c*i ;

        for(int j=0; j<=10000; j++)
        {
            if(ab[j]==cd[i])
                r=ab[j];
                cout<<r<<endl;
            break;
        }
//        if(r != -1)
//            break;
    }
    cout<<r<<endl;

    return 0;
}
