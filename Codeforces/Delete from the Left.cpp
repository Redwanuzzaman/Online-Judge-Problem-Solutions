#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int sz1 = s1.size(), sz2 = s2.size();
    while(sz1 > 0 && sz2 > 0 && s1[sz1-1] == s2[sz2-1])
    {
        sz1--;
        sz2--;
    }
    cout << sz1 + sz2 << endl;
}
