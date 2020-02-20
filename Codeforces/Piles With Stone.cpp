#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, f, s, sum = 0, sum2 = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> f;
        sum += f;
    }
    for(int i = 0 ; i < n; i++)
    {
        cin >> s;
        sum2 += s;
    }
    if(sum >= sum2) cout << "Yes" << endl;
    else cout << "No" << endl;
}
