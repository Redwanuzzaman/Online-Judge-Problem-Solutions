#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int length, up = 0, right = 0, coin = 0;
    cin >> length >> s;

    for(int i = 0; i < length; i++)
    {
        if(s[i] == 'U') up++;
        else right++;

        if((up == right) && (s[i] == s[i+1])) coin++;
    }
    cout << coin << endl;
}
