#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0, y = 0;
    string s;
    cin >> n >> s;
    for(int i=0; i < n; i++)
    {
        if(s[i]=='L') x--;
        if(s[i]=='U') y++;
        if(s[i]=='D') y--;
        if(s[i]=='R') x++;
    }
    cout << n-abs(x)-abs(y) << endl;

}
