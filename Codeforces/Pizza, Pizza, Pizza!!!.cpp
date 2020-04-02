#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, tmp;
    cin >> n;
    tmp = n+1;
    if((tmp == 1) || (tmp % 2 == 0)) cout << tmp/2 << endl;
    else cout << tmp << endl;
}
