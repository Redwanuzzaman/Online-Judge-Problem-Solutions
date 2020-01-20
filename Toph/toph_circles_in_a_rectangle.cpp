#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%d",&t)

int main()
{
    int t, cs = 1;
    double r, len, wd, circle_area, rect_area, res;
    sft;
    while(t--)
    {
        scanf("%lf", &r);
        len = r * 2.0;
        wd = r * 4.0;
        rect_area = len * wd;
        circle_area = (3.1416 * r * r) * 2.0;
        res = rect_area - circle_area;
        printf("Case %d: ", cs++);
        cout << fixed << setprecision(2) << res << endl;
    }
}
