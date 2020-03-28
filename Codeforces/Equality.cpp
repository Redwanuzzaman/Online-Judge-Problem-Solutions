#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, mn = 100000000;
    string str;
    map <char,int> mp;
    map <char,int> :: iterator it;

    cin >> n >> k >> str;

    for(int i = 0; i < n; i++) mp[str[i]]++;

    for(it = mp.begin(); it != mp.end(); it++)
        if(it -> second < mn) mn = it -> second;

    if(mp.size() < k) cout << 0 << endl;
    else cout << mn*k << endl;
}
