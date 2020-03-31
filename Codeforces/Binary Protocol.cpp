#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') cnt++;
        else cout << cnt, cnt = 0;
    }
    cout << cnt;
}
