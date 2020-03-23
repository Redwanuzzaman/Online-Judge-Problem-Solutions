// 2015 Tishreen Collegiate Programming Contest, problem: (E) Pairs

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, d1, d2, d3, d4, d5, arr[11];
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int sum = 0;
        for(int j = 0; j < 10; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        sort(arr, arr+10);
        sum /= 4;
        d3 = sum - arr[0] - arr[9];
        d5 = arr[8] - d3;
        d4 = arr[9] - d5;
        d1 = arr[1] - d3;
        d2 = arr[0] - d1;
        cout << "Case " << i << ": " << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << endl;
    }
    return 0;
}
