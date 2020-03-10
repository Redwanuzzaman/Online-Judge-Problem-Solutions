// 2017 ACM Arabella Collegiate Programming Contest, problem: (B) Unusual Team

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a >= b) cout << "FunkyMonkeys" << endl;
        else cout << "WeWillEatYou" << endl;
    }
}
