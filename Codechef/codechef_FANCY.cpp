#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%d",&t)

int main()
{
    int t, sz;
    string s;
    sft;
    getchar();
    while(t--)
    {
        getline(cin, s);
        sz = s.size();
        int f = s.find("not");
        if(f == -1) cout << "regularly fancy\n";
        else
        {
            if(s[f-1] == ' ' || f == 0)
            {
                if(s[f+3] == ' ' || f+2 == sz-1) cout << "Real Fancy\n";
                else cout << "regularly fancy\n";
            }
            else cout << "regularly fancy\n";
        }
    }
}

