#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,cnt=0;
    cin>>test;
    string s;
    cin>>s;

    for(int i=0; i<test; i++)
    {
       if(s[i]==s[i+1])
        cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
