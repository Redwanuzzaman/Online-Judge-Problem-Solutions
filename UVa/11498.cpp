#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t))
    {
        if(t==0)break;
        int a,b,c,d;
        cin>>a>>b;

        while(t--)
        {
            cin>>c>>d;
            if(c==a||b==d)cout<<"divisa\n";
            else  if(c>a&&d>b)cout<<"NE\n";
            else if(c<a&&d>b)cout<<"NO\n";
            else if(c<a&&d<b)cout<<"SO\n";
            else if(c>a&&d<b)cout<<"SE\n";


        }
    }
    return 0;
}
