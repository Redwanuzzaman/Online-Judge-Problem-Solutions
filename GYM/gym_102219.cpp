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
    string a, b, c;
    cin >> a >> b >> c;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '=')
        {
            for(int j = i+1; j < a.size(); j++)
            {
                if(a[j] != '.') return cout << a[j] << endl, 0;
            }
            cout << "You shall pass!!!\n";
        }
    }
    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] == '=')
        {
            for(int j = i+1; j < b.size(); j++)
            {
                if(b[j] != '.') return cout << b[j] << endl, 0;
            }
            cout << "You shall pass!!!\n";
        }
    }
    for(int i = 0; i < c.size(); i++)
    {
        if(c[i] == '=')
        {
            for(int j = i+1; j < c.size(); j++)
            {
                if(c[j] != '.') return cout << c[j] << endl, 0;
            }
            cout << "You shall pass!!!\n";
        }
    }
}
