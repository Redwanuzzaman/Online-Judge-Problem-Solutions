#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, U, D, F, cnt = 0;
    double cost = 0.0;
    while(1)
    {
        cin >> H >> U >> D >> F;
        if(H == 0) break;
        double h = H, u = U, d = D, f = F;
        f = u * (f / 100);
        while(1)
        {
            cnt++;
            if(u > 0) cost += u;
            u -= f;
            if(cost > h)
            {
                cout << "success on day " << cnt << endl;
                break;
            }
            cost -= d;
            if(cost < 0)
            {
                cout << "failure on day " << cnt << endl;
                break;
            }
        }
        cnt = 0, cost = 0.0;
    }
}
