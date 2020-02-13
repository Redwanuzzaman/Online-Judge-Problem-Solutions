#include <bits/stdc++.h>
using namespace std;

int arr[101];
int main()
{
    int n, cnt, sum = 0, x;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cnt = 0;
        cin >> s;
        for(int j = 0; j < n; j++)
        {
            if(s[j] == 'C')
            {
                cnt++;
                arr[j]++;
            }
        }
        if(cnt >= 2)
        {
            cnt--;
            x = (cnt * (cnt+1))/2;
            sum += x;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 2)
        {
            arr[i]--;
            x = (arr[i] * (arr[i]+1))/2;
            sum += x;
        }
    }
    cout << sum << endl;
}
