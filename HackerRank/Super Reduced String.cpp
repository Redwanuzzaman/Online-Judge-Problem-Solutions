#include <bits/stdc++.h>

using namespace std;

string superReducedString(string s) {
    int n = s.size();
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1])
        {
            s.erase(i-1,2);
            i = 0;
        }
    }
    return s;
}

int main()
{

    string s;
    getline(cin, s);

    string result = superReducedString(s);
    if(result.size() == 0) cout << "Empty String\n";
    else cout << result << endl;

    return 0;
}

