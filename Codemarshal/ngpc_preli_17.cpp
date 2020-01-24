#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cs = 1;
    while(cin >> n >> m)
    {
        if(n == 0 && m == 0) break;
        printf("Case %d: ", cs++);
        if(n == 1 || m == 1) cout << "Odd.\n";
        else cout << "Even.\n";
    }
}

