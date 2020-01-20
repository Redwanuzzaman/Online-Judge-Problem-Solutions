#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cas = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int fail = 0;
        double cg, credit, cs = 0, res = 0.0, sum = 0.0;
        while(n--)
        {
            cin >> cg >> credit;
            cs += credit;
            if(cg >= 80) sum += (4.0 * credit * 1.0);
            else if(cg >= 75) sum += (3.75 * credit * 1.0);
            else if(cg >= 70) sum += (3.50 * credit * 1.0);
            else if(cg >= 65) sum += (3.25 * credit * 1.0);
            else if(cg >= 60) sum += (3.00 * credit * 1.0);
            else if(cg >= 55) sum += (2.75 * credit * 1.0);
            else if(cg >= 50) sum += (2.50 * credit * 1.0);
            else if(cg >= 45) sum += (2.25 * credit * 1.0);
            else if(cg >= 40) sum += (2.00 * credit * 1.0);
            else fail++;
        }
        res = sum / (cs * 1.0);
        printf("Case %d: ", cas++);
        if(fail == 1) printf("Sorry, you have failed in 1 course!\n");
        else if(fail > 1) printf("Sorry, you have failed in %d courses!\n", fail);
        else cout << fixed << setprecision(2) << res << endl;
    }
}
