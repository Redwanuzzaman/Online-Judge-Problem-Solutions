#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    string s, s1, s2;

    for(int k = 1; k <= t; k++)
    {
        getline(cin,s);
        s1 = "", s2 = "";
        for(int i=0; i < s.size(); i++)
            if((s[i] >= 'a' && s[i] <= 'z')) s2 += s[i];

        s1 = s2;
        reverse(s2.begin(),s2.end());
        int d = sqrt(s2.size());

        if(s1 == s2)
        {
            if(d * d == s2.size()) cout << "Case #" << k << ":" << endl << d << endl;
            else cout << "Case #" << k << ":" << endl << "No magic :(" << endl;
        }
        else cout << "Case #" << k << ":" << endl << "No magic :(" << endl;
    }
}
