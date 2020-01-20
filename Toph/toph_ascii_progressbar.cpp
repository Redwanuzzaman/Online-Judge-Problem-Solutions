#include <bits/stdc++.h>
using namespace std;

int main()
{
    double p;
    string s = "[..........] ";
    cin >> p;
    int d = floor(p);
    int l = d/10;
    for(int i = 1; i <= l; i++) s[i] = '+';
    cout << s << d << "%\n";
}
