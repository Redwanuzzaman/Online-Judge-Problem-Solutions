#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int c = 0;
        for(int i = 0; i < s.size()/2; i++)
        {
            if(s[i] == '(')
            {
                c++;
            }
        }
        cout << 2*c << endl;
    }
}
