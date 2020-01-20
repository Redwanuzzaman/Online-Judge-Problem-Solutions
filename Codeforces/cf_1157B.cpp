#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfxy scanf("%d%d",&x,&y)
#define sfarr scanf("%d",&arr[i])
#define sf2d scanf("%d",&arr[i][j])
#define pi acos(-1)
typedef long long ll;

int main()
{
    int n, arr[10], k = 0, dig;
    bool flag = false;
    string s;
    sfn;
    cin >> s;
    for(int i = 1; i <= 9; i++) cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
        dig = s[i] - '0';
        if(arr[dig] > dig)
        {
            s[i] = arr[dig] + '0';
            flag = true;
        }
        if(arr[dig] < dig && flag == true) break;
    }
    cout << s << endl;
}
