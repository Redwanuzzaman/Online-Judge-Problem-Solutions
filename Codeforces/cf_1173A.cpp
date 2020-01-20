#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if((a+c) < b) cout << "-\n";
    else if((b+c) < a) cout << "+\n";
    else if((a==b) && (c==0)) cout << "0\n";
    else cout << "?\n";
}
