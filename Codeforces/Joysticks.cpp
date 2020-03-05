#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1, a2, cnt = 0;
    cin >> a1 >> a2;
    while(a1 > 0 && a2 > 0)
    {
        if(a1 == 1 && a2 == 1) break;
        if(a1 > a2) swap(a1, a2);
        a2 -= 2;
        a1++;
        cnt++;
    }
    cout << cnt << endl;
}
