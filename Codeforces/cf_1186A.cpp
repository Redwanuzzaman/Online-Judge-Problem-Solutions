#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a[3], d, s1, s2;
    cin >> a[0]  >> a[1] >> a[2] >> d;
    sort(a, a+3);
    s1 = a[1] - a[0];
    if(s1 >= d) s1 = 0;
    else s1 = d - s1;
    s2 = a[2] - a[1];
    if(s2 >= d) s2 = 0;
    else s2 = d - s2;
    cout << s1 + s2 << endl;
}
