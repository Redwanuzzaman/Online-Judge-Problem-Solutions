#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;
        int l = s.size() / 2;
        string r = "";
        for(int i = 0; i < l; i++) r += s[i];
        reverse(r.begin(), r.end());
        cout << r << endl;
    }
}
