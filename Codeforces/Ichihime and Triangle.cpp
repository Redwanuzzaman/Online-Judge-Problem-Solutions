#include <bits/stdc++.h>
using namespace std;
 
#define sft scanf("%d",&t)
 
int main()
{
    int a, b, c, d, t;
    sft;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        cout << max(a,b) << " " << max(b,c) << " " << min(c,d) << endl;
    }
 
}
