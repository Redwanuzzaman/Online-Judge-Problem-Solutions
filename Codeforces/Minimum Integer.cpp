#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  t;
    cin >> t;
    while(t--)
    {
        int l, r, d;
        cin >> l >> r >> d;
        if(l > d) cout << d << endl;
        else cout << ((r/d)+1)*d << endl;
    }
}
