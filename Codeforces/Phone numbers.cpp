#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    s = "x" + s;
    if(n%2 == 0)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0 && i < n) cout << s[i] << "-";
            else cout << s[i];
        }
    }
    else
    {
        for(int i = 1; i < n-2; i++)
        {
            if(i % 2 == 0 && i < n) cout << s[i] << "-";
            else cout << s[i];
        }
        for(int i = n-2; i <= n; i++) cout << s[i];
    }
}
