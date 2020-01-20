#include<bits/stdc++.h>

using namespace std;
int main(){

    int a,b;
    while(cin>>a>>b){
            int cnt=0;
        if(a==0 and b==0)return 0;

        for(int i=a;i<=b;++i){
        float a = sqrt(i);
        int b=a;

        if(b*b == i)cnt++;
    }
    cout<<cnt<<endl;
    }
    return 0;

}
