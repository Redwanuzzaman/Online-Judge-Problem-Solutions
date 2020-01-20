#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3 = "";
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] < s2[i]) return cout << -1 << endl, 0;
        else s3 += s2[i];
    }
    cout << s3 << endl;
}
