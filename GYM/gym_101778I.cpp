#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a1, b1, a2, b2;
    cin >> t;
    while(t--)
    {
        cin >> a1 >> b1 >> a2 >> b2;
        if(a1+a2 > b1+b2)
        {
            cout << 1 << endl;
        }
        else if(a1+a2 < b1+b2)
        {
            cout << 2 << endl;
        }
        else if(a1+a2 == b1+b2)
        {
            if(a2 > b1)
            {
                cout << 1 << endl;
            }
            else if(b1 > a2)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}
