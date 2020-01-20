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
    string s;
    int n;
    while(cin >> s && s[0] != '0')
    {
        int sum = 0;
        for(int i = 0; i < s.size(); i++)
        {
            n = s[i] - '0';
            sum += n;
        }
        if(sum % 9 == 0)
        {
            int cnt = 1;
            while(sum>9)
            {
                cnt++;
                int len=0;
                while(sum > 0)
                {
                    len += sum%10;
                    sum /= 10;
                }
                sum = len;
            }
            cout << s << " is a multiple of 9 and has 9-degree " << cnt << "." << endl;
        }
        else cout << s << " is not a multiple of 9." << endl;
    }
}
