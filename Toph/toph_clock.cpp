#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, mnt;
    double hour, angle;
    cin >> h >> mnt;
    hour = h * 30 + mnt * 0.5;
    mnt *= 6;
    angle = hour - mnt;

    cout << fixed << setprecision(4);
    if(angle <= 180) cout << angle << endl;
    else cout << (360.0 - angle) << endl;
}
