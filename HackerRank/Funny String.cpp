#include <bits/stdc++.h>

using namespace std;


string funnyString(string s) {
    int sz = s.size();
    int diff[sz+2], rev[sz+2], p = 0, f = 0;
    for(int i = 1; i < sz; i++)
    {
        int x = abs(int(s[i]) - int(s[i-1]));
        diff[p++] = x;
    }
    p = 0;
    for(int i = sz-1; i > 0; i--)
    {
        int x = abs(int(s[i]) - int(s[i-1]));
        rev[p++] = x;
    }
    for(int i = 0; i < sz-1; i++)
    {
        if(diff[i] != rev[i])
        {
            f = 1;
            break;
        }
    }
    
    if(f == 1) return "Not Funny\n";
    else return "Funny\n";
}

int main()
{
    int q;
    cin >> q;
    getchar();
    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        cout << result;
    }


    return 0;
}
