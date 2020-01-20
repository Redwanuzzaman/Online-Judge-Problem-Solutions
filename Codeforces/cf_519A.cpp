#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r=0,b=0;
    char a;
    for (int i=1;i<=64;i++)
    {
        cin>>a;
        if(a=='Q')
            r+=9;
        else if(a=='q')
            b+=9;
        else if(a=='R')
            r+=5;
        else if(a=='r')
            b+=5;
        else if(a=='B')
            r+=3;
        else if(a=='b')
            b+=3;
        else if(a=='N')
            r+=3;
        else if(a=='n')
            b+=3;
        else if(a=='P')
            r+=1;
        else if(a=='p')
            b+=1;
    }

    if(r>b)
        cout<<"White";
    else if(b>r)
        cout<<"Black";
    else
        cout<<"Draw";

    return 0;
}
