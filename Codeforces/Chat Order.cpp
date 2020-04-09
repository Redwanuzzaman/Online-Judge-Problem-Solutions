#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string,int> mp;
    int n;
    cin >> n;
    string s[n+1];
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = n-1; i >= 0; i--){
        if(mp[s[i]] == 0) cout << s[i] << endl, mp[s[i]] = 1;
    }
}
