#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)

int main()
{
    int t;
    sft;
    string a, b, c, d;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        if(a == c || a == d || b == c || b == d)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Oh no!, such a shame\n";
        }
    }
}
