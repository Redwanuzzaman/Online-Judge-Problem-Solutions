#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, br1, br2;
    cin >> a >> b >> c >> d;
    if(c >= 1) c = 1;
    if(a == d && a >= c) cout << 1 << endl;
    else cout << 0 << endl;
}
