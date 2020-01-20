#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll a11, a12, a21, a22, b11, b12, b21, b22, c11, c12, c21, c22;
    cin >> a11 >> a12 >> a21 >> a22 >> b11 >> b12 >> b21 >> b22;
    c11 = a11 * b11 + a12 * b21;
    c12 = a11 * b12 + a12 * b22;
    c21 = a21 * b11 + a22 * b21;
    c22 = a21 * b12 + a22 * b22;
    cout << c11 << " " << c12 << endl << c21 << " " << c22 << endl;
}
