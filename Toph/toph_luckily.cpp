#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, c = 0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(x % 7 == 0) c++;
    }
    if(c == 13) cout << "Luckily Unlucky" << endl;
    else cout << "Lucky" << endl;
}

