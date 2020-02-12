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
    string a, b, c, d, e, s;
    cin >> s >> a >> b >> c >> d >> e ;
    if(s[0] == a[0] || s[0] == b[0] || s[0] == c[0] || s[0] == d[0] || s[0] == e[0] || s[1] == a[1] || s[1] == b[1] ||s[1] == c[1] ||s[1] == d[1] ||s[1] == e[1])
        cout << "YES" << endl;
    else cout << "NO"  << endl;

}
