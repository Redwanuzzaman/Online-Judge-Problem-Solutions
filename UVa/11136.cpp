#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days, cust, money;
    while(cin >> days, days)
    {
        multiset <int> ms;
        long long promotion = 0;
        while(days--)
        {
            cin >> cust;
            while(cust--)
            {
                cin >> money;
                ms.insert(money);
            }
            multiset <int> :: iterator f = ms.begin(), l = --ms.end();
            promotion += *l - *f;
            ms.erase(f);
            ms.erase(l);
        }
        cout << promotion << endl;
    }
}
