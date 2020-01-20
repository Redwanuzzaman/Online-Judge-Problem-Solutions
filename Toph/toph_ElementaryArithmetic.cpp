#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c = "", res = "", tmp = "";
    cin >> a >> b;
    if(a == "0" && b == "0")
    {
        return cout << 0 << endl, 0;
    }
    int n = max(a.size(), b.size());

    if(b.size() > a.size())
    {
        swap(a, b);
    }
    int z = a.size() - b.size();

    for(int i = 0; i < z; i++)
    {
        c += "0";
    }
    c += b;
    int x, y, add, carry = 0, dig;
    for(int i = n-1; i >= 0; i--)
    {
        x = a[i] - '0';
        y = c[i] - '0';
        add = x + y + carry;
        dig = add % 10;
        //cout << a << endl << c << endl;
        //cout << "Add = " << add << endl;
        if(i == 0)
        {
            int temp = add;
            while(temp)
            {
                int mod = temp % 10;
                temp /= 10;
                char ch = mod + '0';
                tmp += ch;
            }
            reverse(tmp.begin(), tmp.end());
        }
        else
        {
            if(add > 9)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            char ch = dig + '0';
            res += ch;
        }
    }
    reverse(res.begin(), res.end());
    tmp += res;
    cout << tmp << endl;
}
