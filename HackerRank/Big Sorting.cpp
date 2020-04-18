#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)

bool compare(string s1, string s2)
{
    int l1 = s1.size(), l2 = s2.size();
    if(l1 == l2)
    {
        for(int i = 0; i < l1; i++)
        {
            if(s1[i] < s2[i]) return true;
            else if(s1[i] > s2[i]) return false;
        }
    }
    return l1 < l2;
}

int main()
{
    int t;
    sft;
    string s[t];
    for(int i = 0; i < t; i++)
    {
        cin >> s[i];
    }
    sort(s, s+t, compare);

    for(int i = 0; i < t; i++)
        cout << s[i] << endl;
}
