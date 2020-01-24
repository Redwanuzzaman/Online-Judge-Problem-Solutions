#include <bits/stdc++.h>
using namespace std;

string oddlength(string n)
{
    string res = n;
    for(int j = n.size()-2; j >= 0; j--)
        res += n[j];
    return res;
}
int main()
{
    int t, cs = 1;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        cout << "Case " << cs++ << ": " << oddlength(n) << endl;
    }
    return 0;
}
