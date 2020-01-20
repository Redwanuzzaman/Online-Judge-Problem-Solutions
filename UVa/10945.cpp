#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s1, s2;

    while(getline(cin,s))
    {
        s1 = "", s2 = "";
        if(s == "DONE") break;
        int j = 0;
        for(int i=0; i < s.size(); i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z'))
            {
                s2 += s[i];
            }
            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s2 += tolower(s[i]);
            }
        }
        //cout << s2 << endl;
        s1 = s2;
        //cout << s1 << endl;
        reverse(s2.begin(), s2.end());
        if(s1 == s2) cout << "You won't be eaten!" << endl;
        else cout << "Uh oh.." << endl;
    }
}
