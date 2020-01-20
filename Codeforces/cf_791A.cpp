#include<bits/stdc++.h>
using namespace std;

int main()
{
    int limak, bob, i;
    cin>>limak>>bob;
    for(i=1; i<1000000; )
    {
        limak = limak*3 ;
        bob = bob*2 ;
        if(limak>bob)
            break ;
        else
            i++ ;
    }
    cout<<i<<endl;
    return 0;
}
