#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        if(s.size() == 1 && s[0] == '0') break;
        int sum1 = 0, sum2 = 0;
        for(int i = s.size()-1; i >= 0; i -= 2)
        {
            int x = s[i] - '0';
            sum1 += x;
        }
        for(int i = s.size() - 2; i >= 0; i -= 2)
        {
            int x = s[i] - '0';
            sum1 -= x;
        }
        if(sum1%11 == 0) cout << s << " is a multiple of 11.\n";
        else cout << s << " is not a multiple of 11.\n";
    }
}
