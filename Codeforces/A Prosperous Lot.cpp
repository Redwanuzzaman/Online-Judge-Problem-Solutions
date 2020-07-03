#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, m;
    cin >> k;
    if(k > 36) cout << -1 << endl;
    else if(k == 1) cout << "6" << endl;
    else
    {
        if((k % 2) == 1)
        {
            m = k/2;
            for(int i = 1; i <= m; i++) cout << "8";
            cout << "6";
        }
        else
        {
            m = k/2;
            for(int j = 1; j <= m; j++) cout << "8";
        }
    }
}
