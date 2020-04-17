#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0;
    string s;
    cin >> n >> s;
    if(n < 3) cout << 0 << endl;
    else
    {
        for(int i = 0; i < n-2; )
        {
            if(s[i] == '0' and s[i+1] == '1' and s[i+2] == '0')
            {
                s[i+2] = '1';
                c++;
                i = i+3;
            }
            else
            {
                i++;
            }
        }
        cout << c << endl;
    }
}
