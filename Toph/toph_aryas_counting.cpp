#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, cs = 1;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        printf("Case %d: ", cs++);
        if(a > b && a > c) cout << "A" << endl;
        else if(b > a && b > c) cout << "B" << endl;
        else if(c > a && c > b) cout << "C" << endl;
        else cout << "Confused" << endl;
    }
}
