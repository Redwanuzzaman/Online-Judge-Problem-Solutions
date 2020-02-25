#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0, f = 0;
    string str;
    cin >> n >> str;
    for(int i = 0; i < n-1; i++)
    {
        if(str[i] == 'S' && str[i+1] == 'F') s++;
        else if(str[i] == 'F' && str[i+1] == 'S') f++;
    }
    if(s > f) cout << "YES" << endl;
    else cout << "NO" << endl;
}
