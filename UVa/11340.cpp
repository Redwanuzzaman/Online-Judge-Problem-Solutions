#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    map <char, int> mp;
    map <char, int> :: iterator it;
    char ch;

    cin >> test;
    while(test--)
    {
        int payable, val, lines, cent = 0;
        string s;
        cin >> payable;
        while(payable--)
        {
            cin >> ch >> val;
            mp[ch] = val;
        }
        cin >> lines;
        cin.ignore();
        while(lines--)
        {
            getline(cin, s);
            for(int i = 0; i < s.size(); i++)
            {
                it = mp.find(s[i]);
                if(it != mp.end()) cent += it->second;
            }
        }
        double dollar = cent / 100.0;
        cout << fixed << setprecision(2) << dollar << "$" << endl;

        mp.clear();
    }
}
