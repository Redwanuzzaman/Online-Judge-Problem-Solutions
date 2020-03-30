#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0, t;
    cin >> n;
    while(n)
    {
        if(n > 99) c += n/100, t = n/100, n -= 100*c;
        else if(n > 19) c += n/20, t = n/20, n -= 20*t;
        else if(n > 9) c += n/10, t = n/10, n -= 10*t;
        else if(n > 4) c += n/5, t = n/5, n -= 5*t;
        else if(n > 0) c += n/1, t = n/1, n -= 1*t;
    }
    cout << c << endl;
}
