#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        string s;
        int sum1 = 0, sum2 = 0, ts1, ts2, r1, r2, mn, tmn, tmn2;
        cin >> n;
        int arr[n][2] = {0};
        for(int j = 0; j < n; j++)
        {
            cin >> s;
            for(int i = 0; i < n/2; i++)
            {
                if(s[i] == '1')
                {
                    arr[j][0]++;
                }
                if(s[n-i-1] == '1')
                {
                    arr[j][1]++;
                }
            }
            sum1 += arr[j][0];
            sum2 += arr[j][1];
        }
        mn = abs(sum1 - sum2);
        if(sum1 == sum2)
        {
            cout << 0 << endl;
        }
        else
        {
            tmn2 = mn;
            if(sum1 > sum2)
            {
                for(int i = 0; i < n; i++)
                {
                    if(arr[i][0] > arr[i][1])
                    {
                        ts1 = arr[i][0];
                        ts2 = arr[i][1];
                        r1 = sum1 - ts1 + ts2;
                        r2 = sum2 - ts2 + ts1;
                        tmn = abs(r1 - r2);
                        tmn2 = min(tmn, tmn2);
                    }
                }
            }
            else
            {
                for(int i = 0; i < n; i++)
                {
                    if(arr[i][1] > arr[i][0])
                    {
                        ts1 = arr[i][0];
                        ts2 = arr[i][1];
                        r1 = sum1 + ts2 - ts1;
                        r2 = sum2 - ts2 + ts1;
                        tmn = abs(r1 - r2);
                        tmn2 = min(tmn, tmn2);
                    }
                }
            }
            mn = min(mn, tmn2);
            cout << mn << endl;
        }
    }
}
