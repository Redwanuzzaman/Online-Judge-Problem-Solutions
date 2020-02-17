#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    string s;
    cin >> s;
    z = s.size()-1;
    if(s[0] != '-') cout << s << endl;
    else
    {
        x = s[z] - '0';
        y = s[z-1] - '0';
        if(x > y) s.erase(z,1);
        else s.erase(z-1,1);
        if(s == "-0") cout << "0" << endl;
        else cout << s << endl;
    }
}
