#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)

int main()
{
    int x, y, z, t;
    sft;
    while(t--)
    {
        cin >> x >> y >> z;
        if(x == y and x == z) cout << "YES\n" << x << " " << y << " " << z << endl;
        else if(x > y and x == z) cout << "YES\n" << x << " " << y << " " << y << endl;
        else if(y > x and y == z) cout << "YES\n" << x << " " << x << " " << y << endl;
        else if(x > z and x == y) cout << "YES\n" << x << " " << z << " " << z << endl;
        else cout << "NO\n";
    }
}
