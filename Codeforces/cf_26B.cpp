#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len = 0;
    string s;
    stack <char> stk;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(') stk.push(s[i]);
        else if(!stk.empty())
        {
            stk.pop();
            len += 2;
        }
    }
    cout << len << endl;
}
