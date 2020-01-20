#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    string s, res = "";
    cin >> n >> s;
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] != s[i+1])
        {
            res += s[i];
            res += s[i+1];
            i++;
        }
    }
    cout << n-res.size() << endl << res << endl;
}
