// 2017 ACM Arabella Collegiate Programming Contest 

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   ll t, n, x;
   scanf("%lld", &t);
   while(t--)
   {
       ll sum = 0, gcd;
       scanf("%lld", &n);
       for(ll i = 0; i < n; i++)
       {
           scanf("%lld", &x);
           sum += x;

           if(i == 0) gcd = x;
           else gcd = __gcd(gcd,x);
       }
       cout << sum << " " << gcd << endl;
   }
}
