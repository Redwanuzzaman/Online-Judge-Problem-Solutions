#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%d",&t)

int main()
{
    int t, sz;
    string s;
    char c;
    sft;
    while(t--)
    {
        cin >> s >> c;
        sz = s.size();
        for(int i = sz-1; i > 0; i--)
            if(s[i] < s[i-1]) s.erase(i-1, 1);

        for(int i = sz-1; i >= 0; i--)
            if(s[i] > c) s.erase(i, 1);

        while(s.size() < sz)
            s.push_back(c);

        cout << s << endl;
    }
}
