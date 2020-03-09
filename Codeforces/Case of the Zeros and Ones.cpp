#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, one = 0, zero = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0') zero++;
        else one++;
    }
    cout << abs(one - zero) << endl;
}
