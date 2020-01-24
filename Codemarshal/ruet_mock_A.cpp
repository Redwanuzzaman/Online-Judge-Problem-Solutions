#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, s, a, b, c, d;
    cin >> t;
    while(t--)
    {
        cin >> s >> a >> b >> c >> d;
        int div = ceil((s+1)/2.0);
        int sum = a+b+c+d;
        if(sum >= div) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
