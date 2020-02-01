#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sfq scanf("%lld",&q)
#define sfn scanf("%lld",&n)

int main()
{
    int h1, m1, h2, m2;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    int d1 = h1 * 60 + m1;
    int d2 = h2 * 60 + m2;
    int diff = (d2 - d1) / 2;;
    d1 += diff;
    if(d1 / 60 <= 9) cout << "0";
    cout << d1 / 60 << ":";
    if(d1 % 60 <= 9) cout << "0";
    cout << d1 % 60 << endl;
}
