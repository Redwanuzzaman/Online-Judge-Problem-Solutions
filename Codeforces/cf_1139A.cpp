#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0, n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8') sum += i + 1;
    }
    cout << sum << endl;
}
