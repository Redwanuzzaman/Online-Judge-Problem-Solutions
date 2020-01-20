#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n)
    {
        double arr[n], sum = 0, avg, res1 = 0.0, res2 = 0.0;
        for(int i = 0; i < n; i++)
        {
            scanf("%lf", &arr[i]);
            sum += arr[i];
        }
        sum /= n;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] < avg)
            {
                res1 += ((avg - arr[i]) * 100) / 100.0;
            }
            else
            {
                res2 += ((arr[i] - avg) * 100) / 100.0;
            }
        }
        double res = max(res1, res2);
        printf("$%.2lf %.2lf\n", res, avg);
    }
}
