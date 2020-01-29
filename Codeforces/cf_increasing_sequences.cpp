#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k, c = 0;
    cin >> n >> k;
        int arr[n+1];
 
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] <= arr[i-1])
        {
            int tmp = ((arr[i-1]) - arr[i]);
            if(tmp == 0)
            {
                c++;
                arr[i] += k;
 
            }
            else
            {
                tmp++;
                int t = ceil(tmp / (k*1.0));
                c += t;
                arr[i] += t*k;
            }
        }
    }
    cout << c << endl;
}
