#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int sm = 0;
    cin >> s;
    for(int i = 0; i < 4; i++)
    {
        if(s[i] == '+') sm++;
        else sm--;
    }
    cout << sm << endl;
}
