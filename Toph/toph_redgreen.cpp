#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        int cap = 0, sml = 0, dig = 0, pw = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z') cap = 1;
            else if(s[i] >= 'a' && s[i] <= 'z') sml = 1;
            else if(s[i] >= '0' && s[i] <= '9') dig = 1;

            if(cap && sml && dig)
            {
                pw++;
                cap = 0, sml = 0, dig = 0;
            }
        }
        cout << pw << endl;
    }

}
