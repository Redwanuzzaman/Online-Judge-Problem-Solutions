#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)

int main()
{
    int t, n, cs = 1;
    string s;
    sft;
    while(t--)
    {
        sfn;
        getchar();
        getline(cin, s);
        map <char, int> mp;
        map <char, int> :: iterator it;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z') mp[s[i]]++;
        }
        printf("Case %d:\n", cs++);
        if(mp.size() == 0) printf("-1\n");
        else
        {
            for(it = mp.begin(); it != mp.end(); it++)
                cout << it->first << " - " << it->second << endl;
        }
        cout << endl;
    }
}
