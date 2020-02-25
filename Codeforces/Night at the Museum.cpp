#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int x='a';
    cin >> str;
    long long sum = 0;
    for(int i = 0; i < str.size(); i++)
    {
        int a = abs(str[i]-x);
        int mn = abs(26-a);
        mn = min(mn,a);
        sum += mn;
        x = str[i];
    }
    cout<<sum<<endl;
}
