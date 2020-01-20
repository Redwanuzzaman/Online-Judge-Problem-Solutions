#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, f = 0;
    string word, cmd, res = "";
    char c;
    cin >> n;
    getchar();
    getline(cin, word);
    cin >> p;
    while(p--)
    {
        cin >> cmd;
        if(cmd.size() > 1)
        {
            if(cmd[0] == 'C')
            {
                if(f == 0) f = 1;
                else f = 0;
            }
            else if(cmd[0] == 'S') res += ' ';
            else if(cmd[0] == 'B' and (res.size() > 0)) res.erase(res.size()-1, 1);
        }
        else
        {
            if(f == 1)
            {
                c = cmd[0];
                c = toupper(c);
                res += c;
            }
            else res += cmd;
        }
    }
    if(res == word) cout << "Correct\n";
    else cout << "Incorrect\n";
}
