#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("stdin.txt", "r", stdin);
//    freopen("stdout.txt", "w", stdout);
    string a,b;
    cin>>a>>b;
    int al=a.size(),bl=b.size(), largest=-1;
    if(a==b) cout<<-1<<endl;
    else if(al<=bl) cout<<bl<<endl;
    else {
        string frst="";
        for(int i=0;i<al;i++){
            string sub="",tmp;
            for(int j=0;b[j]!='\0';j++){
                sub+=b[j];
                int pos=a.find(sub),sz=sub.size();
                if(pos>1000000 || pos<0){
                    if(sz>largest) largest=sz;
                }
                //aacout<<sub<<endl;
            }
            frst=b[0];
            b.erase(0,1);
        }
        cout<<largest<<endl;
    }
    return 0;
}
