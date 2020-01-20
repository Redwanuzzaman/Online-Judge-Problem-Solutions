#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, c1 = 0, c2 = 0;
    cin >> a >> b >> c;
    int t1 = a, t2 = b;
    for(int i = 0; i <= c; i++)
    {
        t1 -= i;
        t2 -= (c-i);
        c1++;
        if(t1 <= 0 && t2 <= 0)
        {
            break;
        }
    }
    t1 = a;
    t2 = b;
    for(int i = c; i >= 0; i--)
    {
        t1 -= i;
        t2 -= (c-i);
        c2++;
        if(t1 <= 0 && t2 <= 0)
        {
            break;
        }
    }
    cout << min(c1, c2) << endl;
}
