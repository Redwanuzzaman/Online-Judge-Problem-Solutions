#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int d1= s.find("1111111");
    int d2= s.find("0000000");

    if(d1>=0 || d2>=0)
        cout<<"YES"<<endl ;
    else
        cout<<"NO"<<endl ;

    return 0;
}
