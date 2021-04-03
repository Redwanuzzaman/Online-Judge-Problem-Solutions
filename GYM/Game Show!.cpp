#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, n, total = 100, tmp = 100;
    cin >> c;
    while(c--)
    {
        cin >> n;
        tmp += n;
        if(tmp > total)
        {
            total = tmp;
        }
    }
    cout << total << endl;
}
