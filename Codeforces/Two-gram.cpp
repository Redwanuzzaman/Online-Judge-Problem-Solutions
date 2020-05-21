#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string, int> mp;
    int len, mx = 0;
    string str, tmp, res;
    cin >> len >> str;
    for(int i = 0; i < str.size(); i++){
        tmp = str.substr(i,2);
        mp[tmp]++;
        if(mp[tmp] > mx) mx = mp[tmp], res = tmp;
    }
    cout << res << endl;
}
