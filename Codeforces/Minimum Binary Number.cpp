#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c1 = 0, c0 = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') c1++;
        else c0++;
    }
    if(c1 == 0) cout << "0" << endl;
    else{
        cout << "1";
        while(c0--) cout << "0";
    }
}
