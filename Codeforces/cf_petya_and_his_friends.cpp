#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    n -= 2;
    if(n)
    {
        cout << 10 << endl << 15 << endl;
        for(int i = 1; i <= n; i++) cout << 6 * i << endl;
    }
    else cout << -1 << endl;
}
