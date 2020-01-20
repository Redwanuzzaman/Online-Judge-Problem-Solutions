#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mx=0, tbl=0;
    cin>>n;
    n*=2;
    set<int> s;
    while(n--){
        int a;
        cin>>a;
        if(s.count(a)==0){
            s.insert(a);
            tbl+=1;
            if(tbl>mx) mx=tbl;
        }
        else tbl--;
    }
    cout<<mx<<endl;
    return 0;
}
