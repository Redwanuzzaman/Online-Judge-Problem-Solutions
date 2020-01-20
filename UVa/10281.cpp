#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sft scanf("%lld",&t)
#define sfn scanf("%lld",&n)
#define sfl2 scanf("%lld%lld",&n,&m)
#define sfarr scanf("%lld",&arr[i])
#define pi acos(-1)

int main()
{
    double past, cur = 0, spd = 0, h, m, s, dist = 0;
    char str[50];
    while(scanf("%s", str) != EOF)
    {
        sscanf(str, "%lf:%lf:%lf", &h, &m, &s);
        cur = (h * 3600) + (m * 60) + s;
        dist += (cur - past) * (spd / 3600.0);
        char ch = getchar();
        if(ch == ' ') cin >> spd;
        else if(ch == '\n') printf("%s %.2lf km\n", str, dist);
        past = cur;
    }
}
