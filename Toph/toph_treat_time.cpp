#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(((b <= a) && (c <= a)) || ((b > a) && (c > a)) || (b <= c)) cout << "Chocolate" << endl;
    else cout << "Ice-cream" << endl;
}
