#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, poly1, poly2;

    cin >> test;
    while(test--)
    {
        cin >> poly1 >> poly2;
        if(poly1 % poly2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
