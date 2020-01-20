#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    bool ABpaisi= false;
    bool BApaisi= false;
    string s;
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && ! ABpaisi)
        {
            i++;
            ABpaisi = true;
        }
        else if(s[i]=='B' && s[i+1]=='A' && ! BApaisi && ABpaisi)
        {
            i++;
            BApaisi= true;
        }
    }
    if(ABpaisi && BApaisi)
        cout<<"YES"<<endl;
    else
    {
        ABpaisi= false;
        BApaisi= false;
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='B' && s[i+1]=='A' && ! BApaisi)
            {
                i++;
                BApaisi = true;
            }
            else if(s[i]=='A' && s[i+1]=='B' && ! ABpaisi && BApaisi)
            {
                i++;
                ABpaisi= true;
            }
        }
        if(ABpaisi && BApaisi)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
