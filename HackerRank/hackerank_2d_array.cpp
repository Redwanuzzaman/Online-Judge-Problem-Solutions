#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0, mx = INT_MIN;
    int arr[6][6];
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            sum = 0;
            sum += arr[i][j];
            sum += arr[i][j+1];
            sum += arr[i][j+2];
            sum += arr[i+1][j+1];
            sum += arr[i+2][j];
            sum += arr[i+2][j+1];
            sum += arr[i+2][j+2];
            mx = max(mx, sum);
        }
    }
    cout << mx << endl;

}

