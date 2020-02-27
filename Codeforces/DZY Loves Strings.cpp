#include <bits/stdc++.h>
using namespace std;

int main()
{
    int in, arr[26], j, mul = 0;
    string s;
    cin >> s >> in;
    for(int i = 0; i < 26; i++) cin >> arr[i];
    map<char, int> mp;
    for(char i = 97, j = 0; i <= 122; i++, j++) mp[i] = arr[j];
    for(int i = 0, j = 1; i < s.size(); i++, j++) mul += mp[s[i]] * j;
    sort(arr, arr+26);
    for(int i = s.size()+1; i <= (s.size() + in); i++) mul += (i * arr[25]);
    cout << mul << endl;
}
