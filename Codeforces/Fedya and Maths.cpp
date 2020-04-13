#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.size();
    int num = ((s[l-2] - '0') * 10) + s[l-1];
    if(num % 4 == 0) cout << "4" << endl;
    else cout << "0" << endl;
}
