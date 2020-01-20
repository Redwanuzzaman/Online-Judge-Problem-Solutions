#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int rem = (a-b);
    int res = rem%c;
    cout << res << endl;
    return 0;
}
