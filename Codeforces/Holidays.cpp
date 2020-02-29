#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mn, mx, div;
    cin >> n;
    div = n/7;
    if(n % 7 == 0) mn = div * 2, mx = div * 2;
    else if(n % 7 == 1) mn = div * 2, mx = div * 2 + 1;
    else if(n % 7 == 6) mn = div * 2 + 1, mx = div * 2 + 2;
    else mn = div * 2, mx = div * 2 + 2;
    cout << mn << " " << mx << endl;
}
