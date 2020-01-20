#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

int main()
{
    int vertices, len;
    double rad, area;
    cin >> vertices >> len;
    rad = len / (2.0 * sin(pi / vertices));
    area = pi * rad * rad;
    cout << fixed << setprecision(7) << area << endl;
}
