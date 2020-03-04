#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, name, sum = 0, rem = 0;
    cin >> n >> m;
    while(n--)
    {
        cin >> name;
        sum = rem + name;
        (sum < m) ? rem = sum : rem = sum % m;
        cout << sum/m << " ";
    }
}
