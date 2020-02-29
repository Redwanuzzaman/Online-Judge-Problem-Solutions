#include <bits/stdc++.h>

using namespace std;

int anagram(string s)
{
    int sz = s.size();
    if(sz & 1)
        return -1;
    else
    {
        string t1 = "", t2 = "";

        map <char, int> tt1;
        map <char, int> tt2;
        map <char, int> :: iterator it;

        for(int i = 0; i < sz/2; i++)
        {
            t1 += s[i];
            tt1[s[i]]++;
        }
        for(int i = sz/2; i < sz; i++)
        {
            t2 += s[i];
            tt2[s[i]]++;
        }
        int missing = 0;

        for(it = tt1.begin(); it != tt1.end(); it++)
        {
            char ch = it->first;
            if(tt2.find(ch) == tt2.end())
            {
                missing += tt1[ch];
            }
            else
            {
                int x = tt1[ch];
                int y = tt2[ch];
                missing += max(0, x-y);
            }
        }
        return missing;
    }
}

int main()
{
    int q;
    cin >> q;
    getchar();

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s;
        getline(cin, s);
        int res = anagram(s);
        cout << res << endl;
    }
    return 0;
}
