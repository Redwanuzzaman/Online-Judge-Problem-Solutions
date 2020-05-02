#include <bits/stdc++.h>
using namespace std;
 
#define sft scanf("%d",&t)
#define sfnm scanf("%d%d",&n,&m)
 
string to_binary(int n)
{
    string ret = "";
    while(n)
    {
        if(n & 1)
        {
            ret += '1';
        }
        else
        {
            ret += '0';
        }
        n /= 2;
    }
    int sz = 16 - ret.size();
    for(int i = 0; i < sz; i++)
    {
        ret += '0';
    }
    reverse(ret.begin(), ret.end());
    return ret;
}
 
int to_decimal(string num)
{
    int dec_value = 0;
    int base = 1;
    int len = num.size();
 
    for(int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
        {
            dec_value += base;
        }
        base = base * 2;
    }
    return dec_value;
}
 
int main()
{
    int t, n, m;
    char c;
    sft;
    while(t--)
    {
        sfnm;
        cin >> c;
        string binary = to_binary(n);
        string tmp = "";
 
        if(c == 'L')
        {
            for(int i = 0; i < m; i++)
            {
                tmp += binary[i];
            }
            binary.erase(0, m);
            binary += tmp;
        }
        else if(c == 'R')
        {
            for(int i = 16 - m; i < 16; i++)
            {
                tmp += binary[i];
            }
            binary.erase(16-m, m);
            tmp += binary;
            binary = "";
            binary = tmp;
        }
 
        int ans = to_decimal(binary);
        cout << ans << endl;
    }
}
