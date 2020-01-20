#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test,a,b;
    cin >> test;
    for(int i = 0; i < test; i++)
    {
        cin >> a >> b;
        if(a > b) cout << ">" << endl;
        if(a < b) cout << "<" << endl;
        if(a == b) cout << "=" << endl;
    }
    return 0;
}
