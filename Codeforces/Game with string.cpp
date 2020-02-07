#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); )
    {
        if(s[i] == s[i+1])
        {
            cnt++;
            s.erase(i,2);
            i--;
            if(i < 0) i++;
        }
        else i++;
    }
    if(cnt % 2 == 0) cout << "No" << endl;
    else cout << "Yes" << endl;
}
