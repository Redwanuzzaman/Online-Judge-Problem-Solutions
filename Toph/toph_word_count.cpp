#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mx=0;
    string s,r;
    map <string,int> m;
    while(cin>>s){
        m[s]++;
        if(m[s]>mx)mx=m[s],r=s;
    }
    cout<<r<<endl;
}
