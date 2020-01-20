#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, r=-1;
    cin>>a>>b>>c>>d;
    set<int> s;
    for(int i=0;i<100000 ; i++)
    {
        s.insert(b + i*a);
    }

    for(int i=0;i<100000 ; i++)
    {
        if(s.count(d + i*c) == 1)
        {
            r=d + i*c;
            break;
        }
    }
    cout<<r<<endl;
    return 0;
}

