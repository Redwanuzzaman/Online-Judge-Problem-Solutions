#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s += "b";
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] != s[i+1]) cout << "1 ";
        else cout << "0 ";
    }
}
