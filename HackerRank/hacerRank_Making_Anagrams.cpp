#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    map <char, int> aa;
    map <char, int> bb;
    map <char, int> :: iterator it;

    cin >> a >> b;
    int as = a.size();
    int bs = b.size();
    int dlt = 0, tmp;

    for(int i = 0; i < as; i++)
    {
        aa[a[i]]++;
    }
    for(int i = 0; i < bs; i++)
    {
        bb[b[i]]++;
    }
    for(it = aa.begin(); it != aa.end(); it++)
    {
        char ch = it->first;
        if(bb.find(ch) == bb.end())
        {
            tmp = aa[ch];
            dlt += tmp;
        }
        else
        {
            tmp = abs(aa[ch] - bb[ch]);
            dlt += tmp;
        }
    }
    for(it = bb.begin(); it != bb.end(); it++)
    {
        char ch = it->first;
        if(aa.find(ch) == aa.end())
        {
            tmp = bb[ch];
            dlt += tmp;
        }
        else
        {
            continue;
        }
    }

    cout << dlt << endl;
}
