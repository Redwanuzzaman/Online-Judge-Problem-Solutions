#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int res=1;
    str="00"+str;
    for(int i=0; i<str.size(); i++)
    {
        for(int j=i+1; j<str.size(); j++)
        {
            for(int k=j+1; k<str.size(); k++)
            {
               res = (str[i] - '0') * 100 + (str[j] - '0') * 10 + str[k] - '0';
                if(res % 8 == 0)
                {
                   cout<<"YES\n"<<res;
                   return 0;
                }
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
