#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s1, s2, tmp;
    cin >> s1 >> s2;
    int dif = abs(s1.size() - s2.size());

    if(s1.size() > s2.size())
    {
        tmp.insert(tmp.begin(), dif, '0');
        tmp += s2;
        s2 = tmp;
    }
    else if(s2.size() > s1.size())
    {
        tmp.insert(tmp.begin(), dif, '0');
        tmp += s1;
        s1 = tmp;
    }
    for(int i = s1.size() - 1; i >= 0; i--)
    {
        int x = s1[i] - '0';
        int y = s2[i] - '0';
        if(x + y > 9) return cout << "Yes" << endl, 0;
    }
    cout << "No" << endl;
}

