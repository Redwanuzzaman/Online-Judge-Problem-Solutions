#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count1=0,count2=0,result=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        string s;
        cin>>s;

        if(s == "X++" || s== "++X")
            count1++;
        else
            count2++;
    }
    result = count1-count2;
    cout<<result<<endl;

    return 0;
}
