#include<bits/stdc++.h>
using namespace std;

int main()
{
    int oleg,g1,g2,notes,cnt=0,position;

    cin>>oleg>>g1>>g2;
    cin>>notes;

    for(int i=0; i<notes; i++)
    {
        cin>>position;
        if((position>g1 && position<g2) || (position<g1 && position>g2))
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
