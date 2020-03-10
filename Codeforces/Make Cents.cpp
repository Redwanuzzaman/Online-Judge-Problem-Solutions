#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll test, dol, cur;
    double a, total, d;
    string s;
    scanf("%lld", &test);
    for(int i = 0; i < test; i++)
    {
        map <string, double> mp;
        total = 0.0;
        scanf("%lld%lld",&dol,&cur);
        for(int j = 0; j < dol; j++)
        {
            cin >> s;
            scanf("%lf",&a);
            mp[s] = a;
        }
        for(int j = 0; j < cur; j++)
        {
            scanf("%lf", &a);
            cin >> s;
            if(s == "JD") total += a;
            else
            {
                d = mp[s] * a;
                total += d;
            }
        }
        cout << fixed << setprecision(6) << total << endl;
    }
}
