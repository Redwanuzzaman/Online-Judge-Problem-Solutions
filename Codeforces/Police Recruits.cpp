#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0,cnt = 0, v;
    while(n--)
    {
        cin >> v;
        sum += v;
        if(sum < 0)
        {
            cnt++;
            sum = 0;
        }
    }
    cout << cnt << endl;
}
