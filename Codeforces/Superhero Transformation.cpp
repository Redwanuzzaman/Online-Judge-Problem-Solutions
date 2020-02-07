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
    int cnt1 = 0, cnt3 = 0, cnt4 = 0, cnt2 = 0;
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u') s[i] = 'a';
        else s[i] = 'b';
    }
    for(int i = 0; i < t.size(); i++)
    {
        if(t[i] == 'a' || t[i] == 'e' ||t[i] == 'i' ||t[i] == 'o' ||t[i] == 'u') t[i] = 'a';
        else t[i] = 'b';
    }
    //cout << s << endl << t << endl;
    if(s == t) cout << "Yes" << endl;
    else cout << "No" << endl;
}
