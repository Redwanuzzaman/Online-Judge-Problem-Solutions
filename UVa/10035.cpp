#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0, c = 0;
    string s1, s2;
    while (1){
        cin >> s1 >> s2;
        if(s1 == "0" && s2 == "0") break;
        int x = (s1.size()-s2.size());
        if(x < 0) x *= -1;
        string s(x,'0');
        if(s1.size() < s2.size()) s1 = s + s1;
        if(s2.size() < s1.size()) s2 = s + s2;
        for(int i = s1.size(); i >= 0; i--){
            int a = s1[i] - 48;
            int b = s2[i] - 48;
            if(a+b+c > 9) cnt++, c = 1;
            else c = 0;
        }
        if(cnt == 0) cout << "No carry operation." << endl;
        else if(cnt == 1) cout << "1 carry operation." << endl;
        else cout << cnt << " carry operations." << endl;
        cnt = 0, c = 0;
    }
    return 0;
}
