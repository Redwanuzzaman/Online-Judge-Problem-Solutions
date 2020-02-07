#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> n >> s;
        if(n == 2 && s[0] >= s[1]) cout << "NO" << endl;
        else
        {
            cout << "YES\n2\n" << s[0] << " ";
            for(int i = 1; i < s.size(); i++) cout << s[i];
            cout << endl;
        }
    }
}
