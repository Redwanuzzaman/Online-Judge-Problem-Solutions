#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, c;
    cin >> t;
    while(t--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> c;
        a[2] = a[0] ^ a[1];
        cout << a[c%3] << endl;
    }
}
