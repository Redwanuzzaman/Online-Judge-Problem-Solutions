#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0, b, ans=123456789;
    cin >> t;
    int arr[t+1];
    for(int i=0; i<t; i++)
    {
        cin >> b;
        if(b%2 == 1)return cout<<"0"<<endl, 0;
        while(b%2 == 0)c++, b/=2;
        ans=min(c, ans);
        c=0;
    }

    cout << ans << endl;
    return 0;
}
