#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0, num = 0, k = 0, p = 0;
    string s;
    cin >> s;
    for(int i = s.size()-1; i >= 0; i--)
    {
        k = s[i] - '0';
        sum += k;
        num += (k * (pow(10.0, p)));
        p++;
    }
    if(num % sum == 0) cout << "Yes\n";
    else cout << "No\n";
}
