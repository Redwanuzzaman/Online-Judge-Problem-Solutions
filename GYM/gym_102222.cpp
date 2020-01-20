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
    int t, x, y, cs = 1;
    sft;
    string s1, s2, s3, res;
    while(t--)
    {
        sfxy;
        cin >> s1 >> s2 >> s3;
        int diff = s2[0] - s1[0];
        if(diff < 0) diff += 26;
        cout << "Case #" << cs++ << ": ";
        for(int i = 0; i < y; i++)
        {
            int ch = s3[i] - diff;
            if(ch < 65) ch += 26;
            cout << char(ch);
        }
        cout << endl;
    }
}
