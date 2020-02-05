#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, tmp = "";
    cin >> s;
    tmp = s;
    reverse(tmp.begin(), tmp.end());
    s += tmp;
    cout << s << endl;
}
