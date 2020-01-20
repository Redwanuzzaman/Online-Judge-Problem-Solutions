#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, a, b;
    cin >> x >> a >> b;
    if(b > (x+a)) cout << "dangerous" << endl;
    else if(b < (x+a) && b <= x) cout << "delicious" << endl;
    else cout << "safe" << endl;
    return 0;
}
