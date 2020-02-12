#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sft scanf("%lld",&t)
#define sfn scanf("%lld",&n)
#define sfarr scanf("%lld",&arr[i])

int main()
{
    int y, b, r, sum = 0;
    cin >> y >> b >> r;
    for(int i = r; i >= 3; i--)
    {
        if(i-1 <= b && i-2 <= y)
            return cout << i+(i-1)+(i-2) << endl, 0;
    }
}

