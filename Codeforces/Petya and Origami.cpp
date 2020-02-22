#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, a, b , c;
    cin >> n >> k;
    a = ceil ((2*n*1.0) / k);
    b = ceil((5 * n * 1.0) / k);
    c = ceil((8 * n * 1.0)/ k);
    cout << a + b + c << endl;

}
